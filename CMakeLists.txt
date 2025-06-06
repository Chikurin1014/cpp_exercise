cmake_minimum_required(VERSION 3.14)
project(cpp_exercise)
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
    DOWNLOAD_EXTRACT_TIMESTAMP ON
)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_subdirectory(test/01)
add_subdirectory(test/02)
add_subdirectory(test/03)
add_subdirectory(test/04)
add_subdirectory(test/05)
add_subdirectory(test/06)
add_subdirectory(test/07)
add_subdirectory(test/08)
add_subdirectory(test/09)
add_subdirectory(test/10)
