cmake_minimum_required(VERSION 3.20)

project(gauche_cpp VERSION 0.1.0 LANGUAGES C CXX)

option(GAUCHE_BUILD_EXAMPLES "Build the C++ example" ON)
option(GAUCHE_ENABLE_LTO "Enable link-time optimization" ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(GAUCHE_REPO_ROOT "${CMAKE_CURRENT_LIST_DIR}/..")
set(GAUCHE_C_DIR "${GAUCHE_REPO_ROOT}/c")

file(GLOB_RECURSE GAUCHE_W2C2_SOURCES CONFIGURE_DEPENDS
  "${GAUCHE_C_DIR}/w2c2/w2c2/*.c")
list(FILTER GAUCHE_W2C2_SOURCES EXCLUDE REGEX ".*/(main|.*test)\\.c$")

file(GLOB GAUCHE_IMPL_SOURCES CONFIGURE_DEPENDS
  "${GAUCHE_C_DIR}/s[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9].c"
  "${GAUCHE_C_DIR}/d[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9].c")

add_library(gauche_cpp
  src/gauche.cpp
  "${GAUCHE_C_DIR}/gauche_ffi.c"
  ${GAUCHE_IMPL_SOURCES}
  ${GAUCHE_W2C2_SOURCES}
)

if(GAUCHE_ENABLE_LTO)
  set_property(TARGET gauche_cpp PROPERTY INTERPROCEDURAL_OPTIMIZATION_RELEASE ON)
endif()

target_include_directories(gauche_cpp
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
    $<BUILD_INTERFACE:${GAUCHE_C_DIR}>
    $<BUILD_INTERFACE:${GAUCHE_C_DIR}/w2c2/w2c2>
    $<INSTALL_INTERFACE:include>
)

target_compile_features(gauche_cpp PUBLIC cxx_std_20)

add_library(gauche::cpp ALIAS gauche_cpp)

if(GAUCHE_BUILD_EXAMPLES)
  add_executable(gauche_example example/main.cpp)
  target_link_libraries(gauche_example PRIVATE gauche_cpp)
endif()

install(TARGETS gauche_cpp
  EXPORT gaucheCppTargets
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install(DIRECTORY include/ DESTINATION include)
install(EXPORT gaucheCppTargets NAMESPACE gauche:: DESTINATION lib/cmake/gauche)
