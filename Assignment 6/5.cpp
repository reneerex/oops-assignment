#include <iostream>
using namespace std;

class Complex{
    int real, imag;

public:
    Complex(int r, int i){
        real = r;
        imag = i;
    }

    Complex(const Complex &c){
        real = c.real;
        imag = c.imag;
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2){
    int r = c1.real + c2.real;
    int i = c1.imag + c2.imag;

    cout<<"sum = "<<r<<" + "<<i<<"i";
}

int main(){
    Complex c1(2,3);
    Complex c2(4,5);

    c1.display();
    c2.display();

    sum(c1,c2);

    return 0;
}