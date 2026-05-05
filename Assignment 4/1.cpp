#include <iostream>
using namespace std;

class Rectangle{
    int length, breadth;

public:
    // no parameter
    Rectangle(){
        length = 0;
        breadth = 0;
    }

    // two parameters
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    // one parameter
    Rectangle(int x){
        length = x;
        breadth = x;
    }

    void area(){
        cout<<"area = "<<length * breadth<<endl;
    }
};

int main(){
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4,6);

    r1.area();
    r2.area();
    r3.area();

    return 0;
}