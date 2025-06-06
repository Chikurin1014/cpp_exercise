#!/bin/env bash

cd "$(dirname "${BASH_SOURCE:-$0}")/.."
echo "Project root: $(pwd)"

root_cmakelists="CMakeLists.txt"
echo "cmake_minimum_required(VERSION 3.14)" > "$root_cmakelists"
echo "project(cpp_exercise)" >> "$root_cmakelists"
echo "include(FetchContent)" >> "$root_cmakelists"
echo "FetchContent_Declare(" >> "$root_cmakelists"
echo "    googletest" >> "$root_cmakelists"
echo "    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip" >> "$root_cmakelists"
echo "    DOWNLOAD_EXTRACT_TIMESTAMP ON" >> "$root_cmakelists"
echo ")" >> "$root_cmakelists"
echo "FetchContent_MakeAvailable(googletest)" >> "$root_cmakelists"
echo "enable_testing()" >> "$root_cmakelists"
echo "" >> "$root_cmakelists"

# create CMakeLists.txt for each directory in `test`
for dir in exercise/*; do
    if [ ! -d "$dir" ]; then
        continue
    fi
    test_dir="test/${dir#exercise/}"
    test_dir="${test_dir%%_*}"
    echo "Processing directory: $test_dir"
    if [ ! -d "$test_dir" ]; then
        mkdir -p "$test_dir"
    fi

    echo "add_subdirectory(${test_dir})" >> "$root_cmakelists"

    # Create CMakeLists.txt in the directory
    cmakelists="${test_dir}/CMakeLists.txt"
    echo "# This CMakeLists.txt is auto-generated" > "$cmakelists"
    echo "" >> "$cmakelists"

    chapter_number="${test_dir%%_*}"

    for file in "$dir"/*.hpp; do
        if [ ! -f "$file" ]; then
            continue
        fi
        include_filename=$(basename "$file")
        exercise_name="${include_filename%.hpp}"
        include_directory="\${PROJECT_SOURCE_DIR}/exercise/${dir#exercise/}"
        test_numbers="${include_filename%%_*}"
        test_case_id=$(echo "$test_numbers" | sed 's/-//g')

        test_filename="${test_case_id}_test.cpp"
        test_file="${test_dir}/${test_filename}"

        test_name=$(echo "${exercise_name#*_}" | sed 's/-/_/g')
        executable_name="${test_filename%.cpp}"

        echo "option(${test_case_id} \"${test_name}\" ON)" >> "$cmakelists"
        echo "if(${test_case_id})" >> "$cmakelists"
        echo "    add_executable(${executable_name} ${test_filename})" >> "$cmakelists"
        echo "    target_include_directories(${executable_name} PRIVATE ${include_directory})" >> "$cmakelists"
        echo "    target_link_libraries(${executable_name} GTest::gtest_main)" >> "$cmakelists"
        echo "    include(GoogleTest)" >> "$cmakelists"
        echo "    gtest_discover_tests(${executable_name})" >> "$cmakelists"
        echo "endif()" >> "$cmakelists"
        echo "" >> "$cmakelists"

        echo "#include \"${include_filename}\"" > "$test_file"
        echo "" >> "$test_file"
        echo "#include <gtest/gtest.h>" >> "$test_file"
        echo "" >> "$test_file"
        echo "TEST(ch_${test_case_id}, ${test_name}) {" >> "$test_file"
        echo "    // TODO: Implement the test" >> "$test_file"
        echo "    ASSERT_TRUE(true);" >> "$test_file"
        echo "}" >> "$test_file"
    done
done
