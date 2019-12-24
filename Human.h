#pragma once
#include "SchoolObject.h"
#include <string>

using namespace std;

class Human : public SchoolObject {
public:
    string firstName;
    string secondName;

    Human(string firstName, string secondName) : SchoolObject() {
        this->firstName = firstName;
        this->secondName = secondName;
    }

    string getName() {
        return firstName + " " + secondName;
    }

};