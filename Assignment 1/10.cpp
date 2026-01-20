#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "even\n";
    else
        cout << "odd\n";

    cout << (n % 2 == 0 ? "even" : "odd");

    return 0;
}
