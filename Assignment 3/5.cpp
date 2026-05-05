#include <iostream>
using namespace std;

class Rectangle{
    int length, width;

public:
    void getdata(){
        cout<<"enter length: ";
        cin>>length;
        cout<<"enter width: ";
        cin>>width;
    }

    void area(){
        cout<<"area = "<<length*width<<endl;
    }
};

int main(){
    int n;
    cout<<"enter number of rectangles: ";
    cin>>n;

    Rectangle r[n];

    for(int i=0; i<n; i++){
        r[i].getdata();
    }

    for(int i=0; i<n; i++){
        r[i].area();
    }

    return 0;
}