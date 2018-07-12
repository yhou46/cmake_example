# Cmake minimum required version number
cmake_minimum_required(VERSION 3.9)

# Project name
project (cmake_example02)

# Set to use C++ 11
set (CMAKE_CXX_STANDARD 11)

# Output directories
## CMAKE_BINARY_DIR : if you are building in-source, this is the same as CMAKE_SOURCE_DIR, otherwise this is the top level directory of your build tree
## CMAKE_SOURCE_DIR : this is the directory which contains the top-level CMakeLists.txt, i.e. the top level source directory; DON'T set it manually

# This line set output executable to bin directory
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)



# Executables
# add all files(*.h, *.cpp) to file name {src}
file(GLOB src
	 "*.h"
	 "*.cpp"
)
add_executable(cmake_example02 ${src})



