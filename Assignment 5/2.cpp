#include <iostream>
using namespace std;

class Base{
protected:
    int x;

public:
    void set(){
        x = 10;
    }
};

class Derived : public Base{
public:
    void show(){
        cout<<"x = "<<x<<endl;   // accessible
    }
};

int main(){
    Derived d;
    d.set();
    d.show();
    return 0;
}