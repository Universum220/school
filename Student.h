#pragma once
#include "Human.h"

class Student : public Human {
public:
    Student(const string &firstName, const string &secondName) : Human(firstName, secondName) {}

    string getName(){
        return "test";
    }


};