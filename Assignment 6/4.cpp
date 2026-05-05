#include <iostream>
using namespace std;

class B;

class A{
    int x;
public:
    void set(int a){ x = a; }
    friend void add(A, B);
};

class B{
    int y;
public:
    void set(int b){ y = b; }
    friend void add(A, B);
};

void add(A a, B b){
    cout<<"sum = "<<a.x + b.y;
}

int main(){
    A a;
    B b;

    a.set(5);
    b.set(10);

    add(a,b);

    return 0;
}