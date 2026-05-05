#include <iostream>
using namespace std;

// one parameter
template <class T>
void process(T a){
    cout<<"one value: "<<a<<endl;
}

// same type
template <class T>
void process(T a, T b){
    cout<<"same type: "<<a<<" "<<b<<endl;
}

// different type
template <class T, class U>
void process(T a, U b){
    cout<<"different type: "<<a<<" "<<b<<endl;
}

int main(){
    process(5);
    process(5,10);
    process(5,2.5);

    return 0;
}