//
// Created by dkurlyanov on 11/26/2019.
//

#ifndef SCHOOL_SchoolObject_H
#define SCHOOL_SchoolObject_H

#include <string>
#include <list>
#include <typeinfo>

using namespace std;

class SchoolObject {
public:
    string comment;

    virtual string getInfo() final {
        return getClassName() + " name: " + getName() + "\n"
               + (getInfoImpl().empty() ? "" : ("Info: \n" + getInfoImpl())) + "\n"
               + (comment.empty() ? "" : ("Comment: " + comment));
    }

    virtual string getName() = 0;

protected:
    virtual string getInfoImpl() {
        return "";
    };

private:
    virtual string getClassName() {
        return string(typeid(*this).name());;
    }

};

#endif //SCHOOL_SchoolObject_H