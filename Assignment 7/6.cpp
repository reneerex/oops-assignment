#include <iostream>
#include <string>
using namespace std;

class STRING{
    string s;

public:
    STRING(string str){
        s = str;
    }

    bool operator==(STRING obj){
        return s == obj.s;
    }

    STRING operator+(STRING obj){
        return STRING(s + obj.s);
    }

    void display(){
        cout<<s<<endl;
    }
};

int main(){
    STRING s1("Hello"), s2("World");

    STRING s3 = s1 + s2;
    s3.display();

    if(s1 == s2)
        cout<<"equal";
    else
        cout<<"not equal";

    return 0;
}