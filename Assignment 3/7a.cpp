#include <iostream>
using namespace std;

class Demo{
    int x;

public:
    void set(int a){
        x = a;
    }

    Demo add(Demo d){
        Demo temp;
        temp.x = x + d.x;
        return temp;
    }

    void display(){
        cout<<"value = "<<x<<endl;
    }
};

int main(){
    Demo d1, d2, d3;

    d1.set(5);
    d2.set(10);

    d3 = d1.add(d2);

    d3.display();

    return 0;
}