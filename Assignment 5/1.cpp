#include <iostream>
using namespace std;

class Base{
public:
    void show(){
        cout<<"base class"<<endl;
    }
};

class Derived : public Base{
public:
    void display(){
        cout<<"derived class"<<endl;
    }
};

int main(){
    Base b;
    Derived d;

    b.show();
    d.show();
    d.display();

    return 0;
}