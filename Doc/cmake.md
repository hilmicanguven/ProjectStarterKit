@page REF_CMAKE_TOOL CMake Code Compilation

# Download and Install CMake

download and install Cmake -> https://cmake.org/download
next- next- add to system path - finish

install CMake Extension on VSCode

# Compile and Build

- create CMakeLists.txt at root
- `mkdir build`
- `cd build`
- ` cmake .. ` 
- ` cmake --build . `
- final executable should be created under `build/bin/`  
- to run, `./build/bin/output.exe`

# Add Custom Command

you can add custom command to cmake and **_create release in different format like binary (.bin)_**

# What is CMake

CMake, useful tool to make out project compil-able compatible with Make.

CMake useful because
- compile and link files
- manage dependencies