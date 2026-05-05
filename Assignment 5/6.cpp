#include <iostream>
using namespace std;

class Book{
public:
    string title, author;
    float price;

    void set(){
        cout<<"enter title: ";
        cin>>title;
        cout<<"enter author: ";
        cin>>author;
        cout<<"enter price: ";
        cin>>price;
    }
};

class Textbook : public Book{
public:
    string subject;

    void get(){
        cout<<"enter subject: ";
        cin>>subject;
    }

    void display(){
        cout<<title<<" "<<author<<" "<<price<<" "<<subject;
    }
};

int main(){
    Textbook t;
    t.set();
    t.get();
    t.display();

    return 0;
}