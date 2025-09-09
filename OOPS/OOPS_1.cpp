//
// Created by MIHIR MITHANI on 08/09/25.
//
#include <stdc++.h>
#include <arr.h>

class Branch {
    public:
    string name;
    int dept_id;
    Branch(string name, int dept_id) {
        this->name = name;
        this->dept_id = dept_id;
    }

    Branch();
};

class Student : public Branch{
    public:
    string name;
    int age;
    Student(string name, int age): Branch() {
        this->name = name;
        this->age = age;
    }
};

int main() {
    Student student1 = Student("Mihir", 20);
    cout<<student1.name<<endl;
    return 0;
}