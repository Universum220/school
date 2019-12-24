#pragma once
#include <string>
#include <list>
#include <typeinfo>
#include <iostream>

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

    virtual void log(const string mess) final {
        cout << mess << endl;
    }

private:
    virtual string getClassName() {
        return string(typeid(*this).name());;
    }

};