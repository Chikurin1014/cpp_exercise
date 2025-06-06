# This CMakeLists.txt is auto-generated

option(0501 "standard_inout" ON)
if(0501)
    add_executable(0501_test 0501_test.cpp)
    target_include_directories(0501_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/05_stream)
    target_link_libraries(0501_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0501_test)
endif()

option(0502 "file_operations" ON)
if(0502)
    add_executable(0502_test 0502_test.cpp)
    target_include_directories(0502_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/05_stream)
    target_link_libraries(0502_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0502_test)
endif()

