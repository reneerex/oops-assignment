#include <iostream>
using namespace std;

class Array{
    int a[5];

public:
    int& operator[](int i){
        if(i<0 || i>=5){
            cout<<"out of bound"<<endl;
            exit(0);
        }
        return a[i];
    }
};

int main(){
    Array arr;
    arr[0] = 10;
    cout<<arr[0];
    return 0;
}