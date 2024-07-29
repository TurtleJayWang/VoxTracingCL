cmake_minimum_required(VERSION 3.8)

project(VoxTracingCL)

add_executable(VoxTracing src/main.cpp)

find_package(OpenCL REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

include_directories($(GLEW_INCLUDE_DIRS))
link_libraries($(GLEW_LIBRARIES))

target_link_libraries(OpenCL::OpenCL)
