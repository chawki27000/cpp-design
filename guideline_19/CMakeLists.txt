cmake_minimum_required(VERSION 4.0)
project(GuideLine19)

set(CMAKE_CXX_STANDARD 23)

add_executable(exec)

target_include_directories(exec
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_sources(exec
  PRIVATE
    main.cpp
    src/Shape.cpp
    src/Circle.cpp
    src/Square.cpp
)