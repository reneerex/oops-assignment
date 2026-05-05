#include <iostream>
using namespace std;

class Demo{
    int x;

public:
    void setData(int x){
        this->x = x;   // this pointer
    }

    void display(){
        cout<<"value = "<<x<<endl;
    }
};

int main(){
    Demo d;
    Demo *ptr;

    ptr = &d;   // pointer to object

    ptr->setData(10);   // arrow operator
    ptr->display();

    d.setData(20);      // dot operator
    d.display();

    return 0;
}