#include <iostream>
#include "school.h"

int main() {
    School school = School("school");

    Human student = Human("qwe","123");
    school.students.push_back(student);

    const string mess = school.getInfo();
    cout << mess.c_str();
    fflush(stdout);

    return 0;
}