#include <iostream>
using namespace std;

class B;  // forward declaration

class A{
    int x;
public:
    void set(int a){
        x = a;
    }

    friend void swap(A &, B &);
};

class B{
    int y;
public:
    void set(int b){
        y = b;
    }

    friend void swap(A &, B &);
};

void swap(A &obj1, B &obj2){
    int temp;
    temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}

int main(){
    A a;
    B b;

    a.set(10);
    b.set(20);

    swap(a,b);

    return 0;
}