# This CMakeLists.txt is auto-generated

option(0601 "memory_areas" ON)
if(0601)
    add_executable(0601_test 0601_test.cpp)
    target_include_directories(0601_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/06_memory_management)
    target_link_libraries(0601_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0601_test)
endif()

option(0602 "new_and_delete" ON)
if(0602)
    add_executable(0602_test 0602_test.cpp)
    target_include_directories(0602_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/06_memory_management)
    target_link_libraries(0602_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0602_test)
endif()

option(0603 "deep_and_shallow_copy" ON)
if(0603)
    add_executable(0603_test 0603_test.cpp)
    target_include_directories(0603_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/06_memory_management)
    target_link_libraries(0603_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0603_test)
endif()

option(0604 "move_semantics" ON)
if(0604)
    add_executable(0604_test 0604_test.cpp)
    target_include_directories(0604_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/06_memory_management)
    target_link_libraries(0604_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0604_test)
endif()

option(0605 "smart_pointers" ON)
if(0605)
    add_executable(0605_test 0605_test.cpp)
    target_include_directories(0605_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/06_memory_management)
    target_link_libraries(0605_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0605_test)
endif()

