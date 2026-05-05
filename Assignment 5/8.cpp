#include <iostream>
using namespace std;

class LibraryUser{
public:
    string name;
};

class Student : public LibraryUser{
public:
    int grade;

    void show(){
        cout<<name<<" "<<grade<<endl;
    }
};

class Teacher : public LibraryUser{
public:
    string dept;

    void show(){
        cout<<name<<" "<<dept<<endl;
    }
};

int main(){
    Student s;
    Teacher t;

    s.name = "A";
    s.grade = 10;

    t.name = "B";
    t.dept = "CSE";

    s.show();
    t.show();

    return 0;
}