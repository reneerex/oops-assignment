#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    cout << "enter two numbers: ";
    cin >> a >> b;

    cout << "1.add 2.subtract 3.multiply 4.divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4: cout << a / b; break;
        default: cout << "invalid choice";
    }

    return 0;
}
