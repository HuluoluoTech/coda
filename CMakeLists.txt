cmake_minimum_required (VERSION 3.24)

if (POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW)
endif ()

set(PROJECTNAME coda)
project(${PROJECTNAME})

message(STATUS ${PROJECT_SOURCE_DIR})
message(STATUS ${CMAKE_CURRENT_SOURCE_DIR}/libs/)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_FLAGSD "${CMAKE_CXX_FLAGS} -O0 -Wall -g -ggdb -fno-rtti")

aux_source_directory(src DIR_MAIN_SRCS)
add_executable(${PROJECTNAME} ${DIR_MAIN_SRCS})

# include header path
# target_include_directories(${PROJECTNAME} PUBLIC
#  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/includes/irrKlang/>)

# Link libs
target_link_libraries(${PROJECTNAME} -lpthread)
target_link_libraries(${PROJECTNAME} -ldl)

