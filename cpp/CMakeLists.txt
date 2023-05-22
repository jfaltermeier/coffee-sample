# auto-generated stub from '/home/johannes/Git/cdt-cloud-blueprint/applications/docker/SuperBrewer3000/superbrewer3000.coffee' at 2023/05/11 10:51:40
cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(SuperBrewer3000 VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set compile commands for clangd to ON
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Turn debugging on
set(CMAKE_BUILD_TYPE Debug)

include_directories(${SuperBrewer3000_SOURCE_DIR}/inc)

add_subdirectory(src)

# add the binary tree to the search path for include files
target_include_directories(SuperBrewer3000 PUBLIC "${PROJECT_BINARY_DIR}" )
