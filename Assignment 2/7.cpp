#include <iostream>
using namespace std;

namespace A{
    int x = 10;

    void show(){
        cout<<"namespace A x = "<<x<<endl;
    }
}

namespace B{
    int x = 20;

    void show(){
        cout<<"namespace B x = "<<x<<endl;
    }
}

int main(){
    A::show();
    B::show();

    cout<<"A x = "<<A::x<<endl;
    cout<<"B x = "<<B::x<<endl;

    return 0;
}