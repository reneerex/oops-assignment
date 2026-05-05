#include <iostream>
using namespace std;

class Demo{
public:
    int x;

    void show(){
        cout<<"value = "<<x<<endl;
    }
};

int main(){

    // integer
    int *p = new int;
    *p = 10;
    cout<<"int = "<<*p<<endl;
    delete p;

    // float
    float *f = new float;
    *f = 5.5;
    cout<<"float = "<<*f<<endl;
    delete f;

    // integer array
    int *arr = new int[3];
    for(int i=0; i<3; i++){
        arr[i] = i+1;
        cout<<arr[i]<<" ";
    }
    delete[] arr;

    cout<<endl;

    // float array
    float *farr = new float[2];
    farr[0] = 1.1;
    farr[1] = 2.2;
    cout<<farr[0]<<" "<<farr[1]<<endl;
    delete[] farr;

    // object
    Demo *d = new Demo;
    d->x = 50;
    d->show();
    delete d;

    // array of objects
    Demo *darr = new Demo[2];
    darr[0].x = 100;
    darr[1].x = 200;

    darr[0].show();
    darr[1].show();

    delete[] darr;

    return 0;
}