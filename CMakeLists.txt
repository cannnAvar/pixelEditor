cmake_minimum_required(VERSION 3.0.0)
project(PixelEditor VERSION 0.1.0)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})
set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)
set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)

set(PROJECT_SOURCE_FILES 
        ${PROJECT_SOURCE_DIR}/main.cpp
        ${PROJECT_SOURCE_DIR}/kutuphane.cpp)
        
set(PROJECT_INCLUDE_FILES 
                ${PROJECT_INCLUDE_DIR}/kutuphane.cpp)

include_directories(${PROJECT_INCLUDE_DIR} ${PROJECT_LIB_INCLUDES})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_FILES})