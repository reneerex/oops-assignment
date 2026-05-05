#include <iostream>
using namespace std;

class Rectangle{
    int length, breadth;

public:
    // constructor with default arguments
    Rectangle(int l = 0, int b = 0){
        length = l;
        breadth = b;
    }

    void area(){
        cout<<"area = "<<length * breadth<<endl;
    }

    // destructor
    ~Rectangle(){
        cout<<"object destroyed"<<endl;
    }
};

int main(){
    Rectangle r[3] = { Rectangle(), Rectangle(5), Rectangle(4,6) };

    for(int i=0; i<3; i++){
        r[i].area();
    }

    return 0;
}