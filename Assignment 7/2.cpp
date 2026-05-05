#include <iostream>
using namespace std;

class Shape{
public:
    virtual void area(){}
    virtual void display(){}
};

class Circle : public Shape{
public:
    void area(){
        cout<<"area of circle = "<<3.14*2*2<<endl;
    }
    void display(){
        cout<<"circle"<<endl;
    }
};

class Rectangle : public Shape{
public:
    void area(){
        cout<<"area of rectangle = "<<4*5<<endl;
    }
    void display(){
        cout<<"rectangle"<<endl;
    }
};

class Triangle : public Shape{
public:
    void area(){
        cout<<"area of triangle = "<<4*5/2<<endl;
    }
    void display(){
        cout<<"triangle"<<endl;
    }
};

int main(){
    Shape *s;

    Circle c;
    Rectangle r;
    Triangle t;

    s = &c; s->display(); s->area();
    s = &r; s->display(); s->area();
    s = &t; s->display(); s->area();

    return 0;
}