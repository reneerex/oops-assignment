#include <iostream>
using namespace std;

inline int cube(int x){
    return x*x*x;
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    cout<<"cube = "<<cube(n);

    return 0;
}