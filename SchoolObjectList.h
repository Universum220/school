#pragma once
#include "SchoolObject.h"

template<typename T>
class SchoolObjectList : public list<T>, public SchoolObject {
public:
    void add(T object) {
        this->push_back(object);
        cout << "In " << this->getName()  << " add " << object.getName() << endl;
    };

    string getName() {
        return "test";
    }

};