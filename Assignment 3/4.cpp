#include <iostream>
using namespace std;

class A{
    int x;
public:
    void set(int a){
        x = a;
    }

    friend class B;
};

class B{
public:
    void show(A obj){
        cout<<"value of x = "<<obj.x;
    }
};

int main(){
    A a;
    B b;

    a.set(15);
    b.show(a);

    return 0;
}