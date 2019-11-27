#include <vector>
#include "schoolObject.h"
#include "human.h"

class School : public SchoolObject {
public:
    string name;
    vector<Human> students;
    vector<Human> techers;

    School(string name)  {
        this->name = name;
    }

    string getName() override {
        return name;
    }

protected:
    string getInfoImpl() {
        string info;
        for (auto student : students) {
            info += student.getInfo();
        }

        return info;
    }

};
