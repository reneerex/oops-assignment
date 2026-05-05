#include <iostream>
using namespace std;

class Speedometer{
public:
    int speed;

    void setSpeed(){
        speed = 60;
    }
};

class FuelGauge{
public:
    int fuel;

    void setFuel(){
        fuel = 50;
    }
};

class Thermometer{
public:
    int temp;

    void setTemp(){
        temp = 30;
    }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer{
public:
    void display(){
        cout<<"speed = "<<speed<<endl;
        cout<<"fuel = "<<fuel<<endl;
        cout<<"temp = "<<temp<<endl;
    }
};

int main(){
    CarDashboard c;
    c.setSpeed();
    c.setFuel();
    c.setTemp();
    c.display();

    return 0;
}