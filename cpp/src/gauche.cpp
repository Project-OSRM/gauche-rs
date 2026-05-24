#include "gauche/gauche.hpp"

#include <bit>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <stdexcept>
#include <utility>

#include "gauche_ffi.h"

namespace gauche {

extern "C" void trap(Trap trap) {
    std::fprintf(stderr, "w2c2 trap: %s\n", trapDescription(trap));
    std::abort();
}

namespace {

constexpr std::uint32_t kPageSize = 65536;

std::uint32_t align_up(std::uint32_t value, std::size_t alignment) {
    const std::uint32_t mask = static_cast<std::uint32_t>(alignment - 1);
    return (value + mask) & ~mask;
}

std::uint32_t read_u32(const U8* src) {
    return static_cast<std::uint32_t>(src[0]) |
           (static_cast<std::uint32_t>(src[1]) << 8U) |
           (static_cast<std::uint32_t>(src[2]) << 16U) |
           (static_cast<std::uint32_t>(src[3]) << 24U);
}

void write_f64(U8* dst, double value) {
    static_assert(sizeof(double) == sizeof(std::uint64_t), "unexpected double size");
    const std::uint64_t raw = std::bit_cast<std::uint64_t>(value);
    for (std::size_t i = 0; i < sizeof(double); ++i) {
        dst[i] = static_cast<U8>((raw >> (i * 8U)) & 0xffU);
    }
}

} // namespace

struct Index::Impl {
    gauche_ffiInstance* instance = nullptr;
    U32 handle = 0;
    U32 scratch_next = 0;

    Impl() {
        instance = static_cast<gauche_ffiInstance*>(std::calloc(1, sizeof(gauche_ffiInstance)));
        if (!instance) {
            throw std::bad_alloc();
        }
        gauche_ffiInstantiate(instance, nullptr);
        handle = gauche_ffi_gauche_create(instance);
        if (handle == 0) {
            std::free(instance);
            instance = nullptr;
            throw std::runtime_error("failed to create gauche instance");
        }
        scratch_next = gauche_ffi_memory(instance)->size;
    }

    ~Impl() {
        if (instance) {
            if (handle != 0) {
                gauche_ffi_gauche_destroy(instance, handle);
            }
            gauche_ffiFreeInstance(instance);
            std::free(instance);
        }
    }

    U32 allocate(std::size_t bytes, std::size_t alignment) {
        auto* memory = gauche_ffi_memory(instance);
        const auto aligned = align_up(scratch_next, alignment);
        const std::uint64_t end = static_cast<std::uint64_t>(aligned) + bytes;
        if (end > memory->size) {
            const std::uint64_t needed = end - memory->size;
            const U32 pages = static_cast<U32>((needed + kPageSize - 1U) / kPageSize);
            if (wasmMemoryGrow(memory, pages) == static_cast<U32>(-1)) {
                throw std::runtime_error("failed to grow guest memory");
            }
        }
        scratch_next = static_cast<U32>(end);
        return aligned;
    }

    U32 store_classification_slot() {
        const U32 addr = allocate(sizeof(std::uint32_t), alignof(std::uint32_t));
        std::memset(gauche_ffi_memory(instance)->data + addr, 0, sizeof(std::uint32_t));
        return addr;
    }

    U32 store_points(std::span<const Point> line) {
        const U32 addr = allocate(line.size() * 2U * sizeof(double), alignof(double));
        U8* data = gauche_ffi_memory(instance)->data + addr;
        for (std::size_t i = 0; i < line.size(); ++i) {
            write_f64(data + (i * 2U * sizeof(double)), line[i].lat);
            write_f64(data + (i * 2U * sizeof(double)) + sizeof(double), line[i].lon);
        }
        return addr;
    }
};

Index::Index(std::unique_ptr<Impl> impl) noexcept : impl_(std::move(impl)) {}

Index::~Index() = default;
Index::Index(Index&&) noexcept = default;
Index& Index::operator=(Index&&) noexcept = default;

std::unique_ptr<Index> Index::create() {
    try {
        return std::unique_ptr<Index>(new Index(std::make_unique<Impl>()));
    } catch (...) {
        return nullptr;
    }
}

QueryResult Index::classify_point(Point point) const {
    const U32 out = impl_->store_classification_slot();
    const U32 status = gauche_ffi_gauche_classify_point(
        impl_->instance,
        impl_->handle,
        point.lat,
        point.lon,
        out);
    return {
        static_cast<Status>(status),
        static_cast<Classification>(read_u32(gauche_ffi_memory(impl_->instance)->data + out)),
    };
}

QueryResult Index::classify_line(std::span<const Point> line) const {
    if (line.empty()) {
        return {Status::InvalidInput, Classification::No};
    }
    const U32 coords = impl_->store_points(line);
    const U32 out = impl_->store_classification_slot();
    const U32 status = gauche_ffi_gauche_classify_line(
        impl_->instance,
        impl_->handle,
        coords,
        static_cast<U32>(line.size()),
        out);
    return {
        static_cast<Status>(status),
        static_cast<Classification>(read_u32(gauche_ffi_memory(impl_->instance)->data + out)),
    };
}

QueryResult Index::classify_bbox(Bbox bbox) const {
    const U32 out = impl_->store_classification_slot();
    const U32 status = gauche_ffi_gauche_classify_bbox(
        impl_->instance,
        impl_->handle,
        bbox.min_lat,
        bbox.min_lon,
        bbox.max_lat,
        bbox.max_lon,
        out);
    return {
        static_cast<Status>(status),
        static_cast<Classification>(read_u32(gauche_ffi_memory(impl_->instance)->data + out)),
    };
}

} // namespace gauche
