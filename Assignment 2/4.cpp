#include <iostream>
using namespace std;

class Rectangle {
    float width, height;
    void read(){
        cout<<width<<","<<height<<endl;
    }

    public: 

    void getdata(){
        cout << "enter width : ";
        cin >> width;
        cout << "enter height : ";
        cin >> height;
        read();
    }

    void calculatearea(){
        int area = width*height;
        cout << "area = "<< area;
    }
};

int main(){
    Rectangle r;
    r.getdata();
    r.calculatearea();
    return 0;
}
