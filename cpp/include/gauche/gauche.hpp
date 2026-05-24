#pragma once

#include <cstdint>
#include <memory>
#include <span>

namespace gauche {

struct Point {
    double lat;
    double lon;
};

struct Bbox {
    double min_lat;
    double min_lon;
    double max_lat;
    double max_lon;
};

enum class Classification : std::uint32_t {
    No = 0,
    Yes = 1,
    Partially = 2,
};

enum class Status : std::uint32_t {
    Ok = 0,
    NullHandle = 1,
    NullOutput = 2,
    InvalidInput = 3,
    InternalError = 4,
};

struct QueryResult {
    Status status;
    Classification classification;

    [[nodiscard]] bool ok() const noexcept { return status == Status::Ok; }
};

class Index {
public:
    static std::unique_ptr<Index> create();

    Index(Index&&) noexcept;
    Index& operator=(Index&&) noexcept;
    ~Index();

    Index(const Index&) = delete;
    Index& operator=(const Index&) = delete;

    [[nodiscard]] QueryResult classify_point(Point point) const;
    [[nodiscard]] QueryResult classify_line(std::span<const Point> line) const;
    [[nodiscard]] QueryResult classify_bbox(Bbox bbox) const;

private:
    struct Impl;

    explicit Index(std::unique_ptr<Impl> impl) noexcept;

    std::unique_ptr<Impl> impl_;
};

} // namespace gauche
