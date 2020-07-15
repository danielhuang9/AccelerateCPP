cmake_minimum_required(VERSION 3.17)
project(AccelerateCPP)

set(CMAKE_CXX_STANDARD 17)

set(BINARY ${CMAKE_PROJECT_NAME})
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

add_executable(${BINARY}_run ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES}
        common/allHeaders.h
#        chap04/xtest.h chap04/grade.h chap04/grade.cpp chap04/Student_info.h
#        chap05/xtest5.h chap05/split.h chap05/split.cpp
#        chap06/xtest6.h chap06/split.h chap06/split.cpp
#        chap07/xtest7.h chap07/table.h chap07/table.cpp
        chap09/grade.cpp chap09/grade.h chap09/Student_info.h chap09/Student_info.cpp  chap09/xtest.h chap09/Teacher_info.h chap09/Teacher_info.cpp)
