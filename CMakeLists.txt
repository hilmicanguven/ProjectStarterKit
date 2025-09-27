# CMakeLists.txt (in the 'root/' directory)

# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(ProjectStarterKit CXX)

# Set the C++ standard (e.g., C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define the source files
# This uses the GLOB pattern, which is convenient for simple projects
# but generally discouraged for complex ones as CMake can't detect
# when new files are added without manually re-running CMake.
# For this simple example, it's fine.
file(GLOB SOURCE_FILES
    "Code/src/*.cpp"
)
# Combine all source files into a single list
set(ALL_SOURCES
    main.cpp
    ${SOURCE_FILES}
)

# Define the include directories
include_directories(
    "Code/inc"
)

# Add an executable target
# The executable will be named 'ProjectStarterKit'
add_executable(ProjectStarterKit
    ${ALL_SOURCES}
)

# Add a custom command to generate the .bin file
add_custom_command(
    TARGET ProjectStarterKit
    POST_BUILD
    # Change -O ihex to -O binary
    COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:ProjectStarterKit> ${CMAKE_BINARY_DIR}/bin/ProjectStarterKit.bin
    COMMENT "Generating Raw Binary file: ProjectStarterKit.bin"
)

# # Add a custom command to generate the .hex file
# # This is the crucial step for creating a custom ProjectStarterKit format.
# add_custom_command(
#     TARGET ProjectStarterKit
#     POST_BUILD
#     # The command uses 'objcopy' to convert the standard binary to an Intel HEX format
#     COMMAND ${CMAKE_OBJCOPY} -O ihex $<TARGET_FILE:ProjectStarterKit> ${CMAKE_BINARY_DIR}/output.hex
#     COMMENT "Generating Intel Hex file: ProjectStarterKit.hex"
# )

# Optional: Set the output directory for the executable
# 👇 Add this line to explicitly set the executable as a Console application
set_target_properties(ProjectStarterKit PROPERTIES 
    WIN32_EXECUTABLE OFF RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# set(CMAKE_C_COMPILER "C:/msys64/ucrt64/bin/gcc")
# $ cmake -DCMAKE_CXX_COMPILER=C:/msys64/ucrt64/bin/g++ -DCMAKE_C_COMPILER=C:/msys64/ucrt64/bin/gcc

# # Later: GoogleTest and unit test setup will go here
