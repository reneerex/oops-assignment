#include <iostream>
using namespace std;

class Demo{
public:
    void operator()(int x, int y){
        cout<<"sum = "<<x+y;
    }
};

int main(){
    Demo d;
    d(5,10);
    return 0;
}