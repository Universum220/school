cmake_minimum_required(VERSION 3.12)
project(school)

set(CMAKE_CXX_STANDARD 14)

add_executable(school Test.cpp SchoolObject.h School.h Human.h Clazz.h SchoolObjectList.h Teacher.h Student.h)