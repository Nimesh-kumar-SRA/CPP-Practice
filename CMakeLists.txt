cmake_minimum_required(VERSION 3.20)

project(CPP_Practice)

set(CMAKE_CXX_STANDARD 17)

add_executable(alphabet_Pattern LOOPS/alphabet_Pattern.cpp
        LOOPS/pyramid_pattern.cpp)
add_executable(for_loop_2 LOOPS/for_loop_2.cpp)
add_executable(For_loops LOOPS/For_loops.cpp)
add_executable(inverted_triangular_pattern LOOPS/inverted_triangular_pattern.cpp)
add_executable(While_loops LOOPS/While_loops.cpp)