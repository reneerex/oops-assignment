#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int rollno;
    string degree;
    string hostel;
    float cgpa;

    void showInternal(){
        cout<<"(internal function call)"<<endl;
    }

public:
    void addDetails(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter roll no.: ";
        cin>>rollno;
        cout<<"enter degree: ";
        cin>>degree;
        cout<<"enter hostel: ";
        cin>>hostel;
        cout<<"enter cgpa: ";
        cin>>cgpa;
    }

    void updateDetails(){
        cout<<"update name: ";
        cin>>name;
        cout<<"update roll no.: ";
        cin>>rollno;
        cout<<"update degree: ";
        cin>>degree;
    }

    void updateCGPA(){
        cout<<"new cgpa: ";
        cin>>cgpa;
    }

    void updateHostel(){
        cout<<"new hostel: ";
        cin>>hostel;
    }

    void displaydetails(){
        showInternal();   // private function called
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Degree: "<<degree<<endl;
        cout<<"Hostel: "<<hostel<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main(){
    Student s;
    s.addDetails();
    s.displaydetails();
    return 0;
}