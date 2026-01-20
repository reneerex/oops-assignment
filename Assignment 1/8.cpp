#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "enter number of late days: ";
    cin >> days;

    if (days <= 5)
        cout << "fine: 50 paise";
    else if (days <= 10)
        cout << "fine: 1 rupee";
    else if (days <= 30)
        cout << "fine: 5 rupees";
    else
        cout << "membership cancelled";

    return 0;
}
