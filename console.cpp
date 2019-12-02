#include <iostream>
#include "school.h"


class Base {
public:
    int test;

    Base(int test) {
        this->test = test;
    }

    int getTest() {
        return test;
    }
};

class PublicChildren : public Base {
public:
    int arr[2];
    int *pArr = new int[2];
    int *ptr;

    PublicChildren(int test, int arr[]) : Base(test) {
        //        this->arr = arr;
        for (int i = 0; i < 1; ++i) {
            this->arr[i] = arr[i];
        }
        *ptr = 1;
    }
};

class PrivateChildren : Base {
public:
    int test2;

    PrivateChildren(int test, int test2) : Base(test), test2(test2) {
    }
};

int main() {
    int n;
    int *pArr = new int[n];
    int arr[2] = {1,2};
    PublicChildren children = PublicChildren(1,arr);


    School school = School("school");

    Human student = Human("qwe", "123");
    school.students.push_back(student);

    const string mess = school.getInfo();
    cout << mess.c_str();
    fflush(stdout);

    return 0;
}