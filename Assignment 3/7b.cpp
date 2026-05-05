#include <iostream>
using namespace std;

class Demo{
    int x;

public:
    void set(int a){
        x = a;
    }

    void add(Demo &d){
        x = x + d.x;
    }

    void display(){
        cout<<"value = "<<x<<endl;
    }
};

int main(){
    Demo d1, d2;

    d1.set(5);
    d2.set(10);

    d1.add(d2);

    d1.display();

    return 0;
}