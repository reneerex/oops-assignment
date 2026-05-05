#include <iostream>
using namespace std;

class Demo{
public:
    Demo(){
        cout<<"constructor called"<<endl;
    }

    // destructor (no return type, no parameter)
    ~Demo(){
        cout<<"destructor called"<<endl;
    }
};

int main(){
    Demo d;
    return 0;
}