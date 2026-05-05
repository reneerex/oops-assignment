#include <iostream>
using namespace std;

class Account{
    const long acc_no;
    long trans_id;
    string type;
    double balance;

    static long counter;

public:
    Account(long a) : acc_no(a){
        balance = 0;
    }

    long depositAmount(const long to, const long from, const double amount){
        balance += amount;
        type = "credit";
        trans_id = ++counter;
        return trans_id;
    }

    long creditAmount(const long to, const long from, const double amount){
        balance -= amount;
        type = "debit";
        trans_id = ++counter;
        return trans_id;
    }

    void displayDetails() const{
        cout<<"acc = "<<acc_no<<" balance = "<<balance<<" last = "<<type<<endl;
    }
};

long Account::counter = 0;

int main(){
    Account a1(1), a2(2);

    a1.depositAmount(1,2,500);
    a1.creditAmount(1,2,200);

    a1.displayDetails();
    a2.displayDetails();

    return 0;
}