#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar{
    int r, theta;

public:
    Polar(int rr,int t){
        r = rr;
        theta = t;
    }

    operator Cartesian();
};

class Cartesian{
    int x,y;

public:
    Cartesian(int a=0,int b=0){
        x=a; y=b;
    }

    void show(){
        cout<<"x="<<x<<" y="<<y;
    }
};

Polar::operator Cartesian(){
    int x = r*cos(theta);
    int y = r*sin(theta);
    return Cartesian(x,y);
}

int main(){
    Polar p(10,5);
    Cartesian c = p;
    c.show();
    return 0;
}