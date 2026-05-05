#include <iostream>
using namespace std;

class Person{
public:
    string name;
};

class Staff : public Person{
public:
    int emp_id;
};

class Student : public Person{
public:
    int student_id;
};

class TeachingAssistant : public Staff, public Student{
public:
    void show(){
        cout<<Staff::name<<" "<<emp_id<<" "<<student_id;
    }
};

int main(){
    TeachingAssistant t;

    t.Staff::name = "John";
    t.emp_id = 101;
    t.student_id = 202;

    t.show();

    return 0;
}