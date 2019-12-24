#pragma once
#include "SchoolObject.h"
#include "SchoolObjectList.h"
#include "Teacher.h"

class Clazz : public SchoolObject{
public:
    SchoolObjectList<Student> students;
    Teacher classTeacher;

    Clazz(Teacher classTeacher) : classTeacher(classTeacher) {}

    const Teacher &getClassTicher() const {
        return classTeacher;
    }

    string getName()
    {
        return "test";
    }

};
