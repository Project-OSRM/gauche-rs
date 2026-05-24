#include "gauche/gauche.hpp"

#include <iostream>
#include <string_view>
#include <vector>

namespace {

const char* to_string(gauche::Classification classification) {
    switch (classification) {
    case gauche::Classification::No: return "no";
    case gauche::Classification::Yes: return "yes";
    case gauche::Classification::Partially: return "partially";
    }
    return "unknown";
}

const char* to_string(gauche::Status status) {
    switch (status) {
    case gauche::Status::Ok: return "ok";
    case gauche::Status::NullHandle: return "null-handle";
    case gauche::Status::NullOutput: return "null-output";
    case gauche::Status::InvalidInput: return "invalid-input";
    case gauche::Status::InternalError: return "internal-error";
    }
    return "unknown";
}

} // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "usage:\n"
                  << "  gauche_example point <lat> <lon>\n"
                  << "  gauche_example line <lat1> <lon1> <lat2> <lon2> ...\n"
                  << "  gauche_example bbox <min_lat> <min_lon> <max_lat> <max_lon>\n";
        return 1;
    }

    auto index = gauche::Index::create();
    if (!index) {
        std::cerr << "failed to create index\n";
        return 1;
    }

    std::string_view command = argv[1];
    gauche::QueryResult result{gauche::Status::InvalidInput, gauche::Classification::No};

    if (command == "point" && argc == 4) {
        result = index->classify_point({std::stod(argv[2]), std::stod(argv[3])});
    } else if (command == "line" && argc >= 6 && ((argc - 2) % 2 == 0)) {
        std::vector<gauche::Point> line;
        for (int i = 2; i < argc; i += 2) {
            line.push_back({std::stod(argv[i]), std::stod(argv[i + 1])});
        }
        result = index->classify_line(line);
    } else if (command == "bbox" && argc == 6) {
        result = index->classify_bbox({
            std::stod(argv[2]),
            std::stod(argv[3]),
            std::stod(argv[4]),
            std::stod(argv[5]),
        });
    } else {
        std::cerr << "bad arguments\n";
        return 1;
    }

    std::cout << to_string(result.status) << ' ' << to_string(result.classification) << '\n';
    return result.ok() ? 0 : 1;
}
