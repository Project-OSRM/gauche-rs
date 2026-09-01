cmake_minimum_required(VERSION 3.20)

project(gauche_cpp VERSION 0.1.0 LANGUAGES C CXX)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

# Examples are useful when hacking on this tree directly, but a consumer that
# adds gauche via add_subdirectory() or a package manager never wants them.
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
  set(GAUCHE_EXAMPLES_DEFAULT ON)
else()
  set(GAUCHE_EXAMPLES_DEFAULT OFF)
endif()

option(GAUCHE_BUILD_EXAMPLES "Build the C++ example" ${GAUCHE_EXAMPLES_DEFAULT})
# Off by default: LTO bloats static archives and cannot be relied on to match a
# consumer's toolchain, which matters for package-manager builds.
option(GAUCHE_ENABLE_LTO "Enable link-time optimization for release builds" OFF)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(GAUCHE_REPO_ROOT "${CMAKE_CURRENT_LIST_DIR}/..")
set(GAUCHE_C_DIR "${GAUCHE_REPO_ROOT}/c")

# The transpiled wasm is emitted as gauche_ffi.c plus one sNNNNNNNNNN.c per
# function batch; both include the header-only w2c2 runtime and nothing else.
file(GLOB GAUCHE_IMPL_SOURCES CONFIGURE_DEPENDS
  "${GAUCHE_C_DIR}/s[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9].c"
  "${GAUCHE_C_DIR}/d[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9].c")

if(NOT GAUCHE_IMPL_SOURCES)
  message(FATAL_ERROR
    "No transpiled sources found in ${GAUCHE_C_DIR}. Run `cargo generate-c`.")
endif()

add_library(gauche_cpp
  src/gauche.cpp
  "${GAUCHE_C_DIR}/gauche_ffi.c"
  ${GAUCHE_IMPL_SOURCES}
)

if(GAUCHE_ENABLE_LTO)
  set_property(TARGET gauche_cpp PROPERTY INTERPROCEDURAL_OPTIMIZATION_RELEASE ON)
endif()

# gauche.hpp exposes no w2c2 or FFI types, so the generated-code include paths
# are build-only; consumers need nothing but the public include directory.
target_include_directories(gauche_cpp
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
  PRIVATE
    "${GAUCHE_C_DIR}"
    "${GAUCHE_C_DIR}/w2c2/w2c2"
)

target_compile_features(gauche_cpp PUBLIC cxx_std_20)

set_target_properties(gauche_cpp PROPERTIES
  VERSION ${PROJECT_VERSION}
  SOVERSION ${PROJECT_VERSION_MAJOR}
  # gauche.cpp is C++ but most of the archive is C; make sure a shared build
  # and any consumer still link the C++ runtime.
  LINKER_LANGUAGE CXX
)

add_library(gauche::cpp ALIAS gauche_cpp)

if(GAUCHE_BUILD_EXAMPLES)
  add_executable(gauche_example example/main.cpp)
  target_link_libraries(gauche_example PRIVATE gauche_cpp)
endif()

# ––– Install –––

install(TARGETS gauche_cpp
  EXPORT gaucheCppTargets
  ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
  INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)
install(DIRECTORY include/ DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")

set(GAUCHE_CMAKE_DIR "${CMAKE_INSTALL_LIBDIR}/cmake/gauche")

install(EXPORT gaucheCppTargets
  NAMESPACE gauche::
  FILE gaucheCppTargets.cmake
  DESTINATION "${GAUCHE_CMAKE_DIR}"
)

configure_package_config_file(
  "${CMAKE_CURRENT_LIST_DIR}/cmake/gaucheConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/gaucheConfig.cmake"
  INSTALL_DESTINATION "${GAUCHE_CMAKE_DIR}"
)

write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/gaucheConfigVersion.cmake"
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMajorVersion
)

install(FILES
  "${CMAKE_CURRENT_BINARY_DIR}/gaucheConfig.cmake"
  "${CMAKE_CURRENT_BINARY_DIR}/gaucheConfigVersion.cmake"
  DESTINATION "${GAUCHE_CMAKE_DIR}"
)
