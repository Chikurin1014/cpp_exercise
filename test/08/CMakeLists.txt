# This CMakeLists.txt is auto-generated

option(0801 "cpp_casts" ON)
if(0801)
    add_executable(0801_test 0801_test.cpp)
    target_include_directories(0801_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/08_cast)
    target_link_libraries(0801_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0801_test)
endif()

option(0802 "c_cast" ON)
if(0802)
    add_executable(0802_test 0802_test.cpp)
    target_include_directories(0802_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/08_cast)
    target_link_libraries(0802_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0802_test)
endif()

