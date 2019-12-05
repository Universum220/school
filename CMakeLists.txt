cmake_minimum_required(VERSION 3.12)
project(school)

set(CMAKE_CXX_STANDARD 14)

add_executable(school console.cpp schoolObject.h school.h human.h clazz.h schoolObjectList.h test.cpp test.h)