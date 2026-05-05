#include <iostream>
using namespace std;

class Book{
public:
    string title, author, ISBN;

    Book(){}

    Book(string t, string a, string i){
        this->title = t;
        this->author = a;
        this->ISBN = i;
    }

    Book(const Book &b){
        title = b.title;
        author = b.author;
        ISBN = b.ISBN;
    }
};

class Library{
public:
    Book b[5];
    int count = 0;

    bool addNewBook(Book obj){
        if(count >= 5) return false;
        b[count] = obj;
        count++;
        return true;
    }

    bool removeBooks(string ISBN){
        for(int i=0; i<count; i++){
            if(b[i].ISBN == ISBN){
                for(int j=i; j<count-1; j++){
                    b[j] = b[j+1];
                }
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails(){
        for(int i=0; i<count; i++){
            cout<<b[i].title<<" "<<b[i].author<<" "<<b[i].ISBN<<endl;
        }
    }
};

int main(){
    Library l;

    Book b1("A","B","1");
    Book b2("C","D","2");
    Book b3("E","F","3");

    l.addNewBook(b1);
    l.addNewBook(b2);
    l.addNewBook(b3);

    l.removeBooks("2");

    l.displayDetails();

    return 0;
}