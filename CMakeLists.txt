cmake_minimum_required(VERSION 3.30)
project(Sorular)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} main.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Src/binary/binarysearch.cpp
        ${CMAKE_CURRENT_LIST_DIR}/Src/vectorTravelller/vectorGame.cpp


)

target_include_directories(${PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/Src/binary/
        ${CMAKE_CURRENT_LIST_DIR}/Src/vectorTravelller/
        ${CMAKE_CURRENT_LIST_DIR}/Src/buffer/
        ${CMAKE_CURRENT_LIST_DIR}/Src/linkedlist/

)