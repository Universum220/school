#pragma once
#include <vector>
#include "SchoolObject.h"
#include "Human.h"
#include "Teacher.h"
#include "Student.h"
#include "SchoolObjectList.h"
#include "Clazz.h"

class School : public SchoolObject {
public:
    string name;
    SchoolObjectList<Student> students;
    SchoolObjectList<Teacher> teachers;
    SchoolObjectList<Clazz> classes;

    School(string name)  {
        this->name = name;
    }

    string getName() override {
        return name;
    }

protected:
    string getInfoImpl() {
        string info;
        for (Student student : students) {
            info += student.getInfo();
        }
        return info;
    }

};