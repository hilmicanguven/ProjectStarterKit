# Get the source files for your tests
file(GLOB TEST_SOURCES "*.cpp")

# Create a test executable target
add_executable(
    unit_tests 
    ${TEST_SOURCES}
)

# Link the test executable against GTest libraries and your project code
target_link_libraries(
    unit_tests 
    PRIVATE 
        # The GTest libraries (these names come from add_subdirectory in step 1)
        gtest_main 
        gtest 
        # Link to your main project library/target (e.g., my_project_lib)
        # ProjectStarterKit 
)

# Set include directories for your test files
target_include_directories(
    unit_tests 
    PRIVATE 
        # Include necessary headers from your source and your submodules
        ${CMAKE_SOURCE_DIR}/Code/inc 
        ${CMAKE_SOURCE_DIR}/Code/src 
        # If your submodule has a specific include path
        ${CMAKE_SOURCE_DIR}/Tools/gtest 
)

# Tell CTest this executable is a test
add_test(
    NAME unit_tests_runner
    COMMAND unit_tests
)