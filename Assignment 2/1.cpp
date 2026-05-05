#include <iostream>
using namespace std;

struct Student{
    string name;
    int rollno;
    string degree;
    string hostel;
    float cgpa;
    
    void addDetails(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter roll no. : ";
        cin>>rollno;
        cout<<"enter your degree: ";
        cin>>degree;
        cout<<"enter current hostel: ";
        cin>>hostel;
        cout<<"enter current cgpa: ";
        cin>>cgpa;
    }
    
    void updateDetails(){
        cout<<"update name: ";
        cin>>name;
        cout<<"update roll no.: ";
        cin>>rollno;
        cout<<"new degree: ";
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
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no. : "<<rollno<<endl;
        cout<<"Degree : "<<degree<<endl;
        cout<<"Hostel : "<<hostel<<endl;
        cout<<"Current CGPA : "<<cgpa<<endl;
    }
};

int main(){
    int n;
    cout<<"enter no. of students: ";
    cin>>n;
    
    
    Student s[n];
    
    for(int i=0; i<n; i++){
        cout<<"enter details : ";
        s[i].addDetails();
    }
    
    for(int i=0; i<n; i++){
        cout<<"info : ";
        s[i].displaydetails();
    }
    return 0;
}