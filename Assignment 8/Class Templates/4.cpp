#include <iostream>
using namespace std;

template <class T>
class Calc{
    T a,b;

public:
    Calc(T x, T y){
        a=x; b=y;
    }

    void show(){
        cout<<"add = "<<a+b<<endl;
        cout<<"sub = "<<a-b<<endl;
        cout<<"mul = "<<a*b<<endl;
    }
};

int main(){
    Calc<int> c(5,3);
    c.show();

    return 0;
}