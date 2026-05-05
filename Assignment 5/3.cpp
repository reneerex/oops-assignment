#include <iostream>
using namespace std;

class Base{
public:
    int x;
};

class A : public Base{};
class B : protected Base{};
class C : private Base{};

int main(){
    A a;
    a.x = 10;   // allowed

    B b;
    // b.x not accessible

    C c;
    // c.x not accessible

    return 0;
}