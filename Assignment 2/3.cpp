#include <iostream>
using namespace std;

class Demo{
private:
    void privateFunc(){
        cout<<"private function called"<<endl;
    }

public:
    void publicFunc(){
        cout<<"inside public function"<<endl;
        privateFunc();  // calling private
    }
};

int main(){
    Demo d;
    d.publicFunc();
    return 0;
}