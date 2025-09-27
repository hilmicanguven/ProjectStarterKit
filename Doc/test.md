@page REF_TEST_TOOL Google Test Unit Test Framework

# Integrate Google Test (Gtest) into Project

I can add GTest framework into my project as git submodules.
I created **Tools** directory to hold google test source codes.
Tools directory may later have contain other tool.

- `git submodule add https://github.com/google/googletest.git ./Tools/gtest` 
- `git submodule update --init --recursive`
- add this library(sub-directory) to main cmakelists.txt- 
    ```cpp
    add_subdirectory(${CMAKE_SOURCE_DIR}/Tools/gtest)
    target_link_libraries(ProjectStarterKit PUBLIC gtest)
    enable_testing()
    add_subdirectory(tests) 
    ```

# Create CMake for Tests
- create another CMakeLists.txt for the test codes. fill inside to find source codes and link

# create test source files
- create test codes to tast your interfaces

# Compile and Run Tests
- compile project as usual
    ```cpp
     cd build
     cmake ..
     cmake --build .
     
    ctest // (or --verbose )
    ```
