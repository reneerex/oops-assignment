#include <iostream>
using namespace std;

float area(float b, float h){
    return 0.5*b*h;   // right triangle
}

float area(float a){
    return (1.73/4)*a*a;   // equilateral
}

float area(float a, float b, float c){
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));   // isosceles
}

int main(){
    cout<<area(4,5)<<endl;
    cout<<area(4)<<endl;
    cout<<area(3,4,5)<<endl;

    return 0;
}