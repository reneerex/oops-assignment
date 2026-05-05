//(a)
#include <iostream>
using namespace std;

class Test{
public:
    void show();
};

void Test::show(){
    cout<<"function defined outside class"<<endl;
}

int main(){
    Test t;
    t.show();
    return 0;
}

//(b)
#include <iostream>
using namespace std;

int x = 10;   // global

int main(){
    int x = 20;   // local

    cout<<"local x = "<<x<<endl;
    cout<<"global x = "<<::x<<endl;

    return 0;
}

//(c)
#include <iostream>
using namespace std;

class Demo{
public:
    static int count;
};

int Demo::count = 5;

int main(){
    cout<<"static value = "<<Demo::count<<endl;
    return 0;
}

//(d)
#include <iostream>

int main(){
    int x;
    std::cout<<"enter number: ";
    std::cin>>x;
    std::cout<<"value = "<<x;
    return 0;
}