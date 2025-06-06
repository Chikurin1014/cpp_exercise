# This CMakeLists.txt is auto-generated

option(0102 "hello_world" ON)
if(0102)
    add_executable(0102_test 0102_test.cpp)
    target_include_directories(0102_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/01_begin_cpp)
    target_link_libraries(0102_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0102_test)
endif()

