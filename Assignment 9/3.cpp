#include <iostream>
#include <fstream>
using namespace std;

class Student{
    int id;
    char name[20];

public:
    void input(){
        cout<<"enter id: ";
        cin>>id;
        cout<<"enter name: ";
        cin>>name;
    }

    void display(){
        cout<<id<<" "<<name<<endl;
    }
};

int main(){
    Student s;

    ofstream fout("data.dat", ios::binary);
    s.input();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    ifstream fin("data.dat", ios::binary);
    fin.read((char*)&s, sizeof(s));
    s.display();

    fin.close();
    return 0;
}