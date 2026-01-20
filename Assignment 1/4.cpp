#include <iostream>
using namespace std;

int main(){
    float c, f;
    cout << "enter temperature in celsius : ";
    cin >> c;

    f = (9 * c / 5) + 32;
    cout << "temperature in fahrenheit: " << f;

    return 0;
}
