#include <iostream>
using namespace std;

class Complex{
    float real, imaginary;

    public:

    void setComplex(float r, float i){
        real = r;
        imaginary = i;
    }

    void displayComplex(){
        cout << real << " + " << imaginary << "i";
    }

    void addComplex(float r1, float r2, float i1, float i2){
        real = r1 + r2;
        imaginary = i1 + i2;
    }
};

int main(){
    float r1, r2, i1, i2;
    cout << "enter real part of first number : ";
    cin >> r1;
    cout<< "enter imaginary part of first number : ";
    cin >> i1;
    cout << "enter real part of second number : ";
    cin >> r2;
    cout<< "enter imaginary part of second number : ";
    cin >> i2;

    Complex c1, c2, sum;

    c1.setComplex(r1, i1);
    c2.setComplex(r2, i2);

    sum.addComplex(r1, r2, i1, i2);

    cout << "first complex number: ";
    c1.displayComplex();

    cout << endl << "second complex number: ";
    c2.displayComplex();

    cout << endl << "sum of complex n2umbers: ";
    sum.displayComplex();

    return 0;
}