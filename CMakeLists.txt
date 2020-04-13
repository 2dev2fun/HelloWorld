cmake_minimum_required(VERSION 3.1.0)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O2")

set(SOURCE_DIR  "${CMAKE_CURRENT_SOURCE_DIR}/source")
set(LIBRARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/library")
set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/source")

add_executable(${PROJECT_NAME} "${SOURCE_DIR}/Main.cpp")

include_directories(${INCLUDE_DIR})

add_library(library
	"${SOURCE_DIR}/MyClassA.cpp"
	"${SOURCE_DIR}/MyClassB.cpp")

target_link_libraries(${PROJECT_NAME} library)
