cmake_minimum_required(VERSION 3.11)

project(Hackathon)

set(RAYLIB_VERSION 5.5)
find_package(raylib ${RAYLIB_VERSION} QUIET)
if (NOT raylib_FOUND) 
  include(FetchContent)
  FetchContent_Declare(
    raylib
    DOWNLOAD_EXTRACT_TIMESTAMP OFF
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
  )
  FetchContent_GetProperties(raylib)
  if (NOT raylib_POPULATED)
    set(FETCHCONTENT_QUIET NO)
    FetchContent_MakeAvailable(raylib)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
  endif()
endif()

set(SOURCE_FILES
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${PROJECT_SOURCE_DIR}/src/WczytywanieDanych.cpp
    ${PROJECT_SOURCE_DIR}/src/Screen.cpp
    ${PROJECT_SOURCE_DIR}/src/ScreenManager.cpp
    ${PROJECT_SOURCE_DIR}/src/RoadmapScreen.cpp
    ${PROJECT_SOURCE_DIR}/src/Marker.cpp
)

set(HEADER_FILES
    ${PROJECT_SOURCE_DIR}/head/WczytywanieDanych.hpp
    ${PROJECT_SOURCE_DIR}/head/QuizScreen.hpp
    ${PROJECT_SOURCE_DIR}/head/Screen.hpp
    ${PROJECT_SOURCE_DIR}/head/ScreenManager.hpp
    ${PROJECT_SOURCE_DIR}/head/SyllabusScreen.hpp
    ${PROJECT_SOURCE_DIR}/head/RoadmapScreen.hpp
    ${PROJECT_SOURCE_DIR}/head/GlobalVariables.hpp
    ${PROJECT_SOURCE_DIR}/head/Marker.hpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
target_include_directories(${PROJECT_NAME} PRIVATE head)
target_include_directories(${PROJECT_NAME} PRIVATE dependencies)