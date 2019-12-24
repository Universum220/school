#include <iostream>
#include <vector>
#include "School.h"

//class Base {
//public:
//    int test;
//
//    Base(int test) {
//        this->test = test;
//    }
//
//    int getTest() {
//        return test;
//    }
//};
//
//class PublicChildren : public Base {
//public:
//    int arr[2];
//    int *pArr = new int[2];
//    int *ptr;
//    vector<int*> list = vector();
//
//    PublicChildren(int test, int arr[]) : Base(test) {
//        //        this->arr = arr;
//        for (int i = 0; i < 1; ++i) {
//            this->arr[i] = arr[i];
//        }
//        *ptr = 1;
//        list.push_back(ptr);
//    }
//
//    PublicChildren(int *arr) : Base(test) {
//        //        this->arr = arr;
//        pArr[1] = arr[1];
//        *ptr = 1;
//    }
//};
//
//class PrivateChildren : Base {
//public:
//    int test2;
//
//    PrivateChildren(int test, int test2) : Base(test), test2(test2) {
//    }
//};

int main() {
    //    int n;
    //    int *pArr = new int[n];
    //    int arr[2] = {1,2};
    //    PublicChildren children = PublicChildren(1,arr);
    //
    //    test q = test();
    //    q.qwe();

    School school = School("school");

    const Student student = Student("firstName1", "secondName1");
    school.students.add(student);
    school.students.add(Student("firstName2", "secondName2"));

    const Teacher teacher = Teacher("FirstName3", "secondName3");
    school.teachers.add(teacher);
    school.teachers.add(Teacher("firstName4", "secondName4"));

    Clazz clazz = Clazz(teacher);
    school.classes.add(clazz);
    clazz.students.add(student);
    

    const string mess = school.getInfo();
    cout << mess.c_str();
    fflush(stdout);

    return 0;
}