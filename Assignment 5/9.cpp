#include <iostream>
using namespace std;

class Vehicle{
public:
    string model;
};

class Truck : public Vehicle{
public:
    int capacity;
};

class RefrigeratedTruck : public Truck{
public:
    int temp;

    void show(){
        cout<<model<<" "<<capacity<<" "<<temp;
    }
};

int main(){
    RefrigeratedTruck r;

    r.model = "Tata";
    r.capacity = 1000;
    r.temp = -5;

    r.show();

    return 0;
}