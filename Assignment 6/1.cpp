#include <iostream>
using namespace std;

class Book{
public:
    string title, author, ISBN;
};

class Library{
    Book b[10];
    int count = 0;

public:
    bool addNewBook(string &title, string &author, string &ISBN){
        if(count >= 10) return false;

        b[count].title = title;
        b[count].author = author;
        b[count].ISBN = ISBN;
        count++;
        return true;
    }

    bool removeBooks(string &ISBN);

    void displayDetails(){
        for(int i=0; i<count; i++){
            cout<<b[i].title<<" "<<b[i].author<<" "<<b[i].ISBN<<endl;
        }
    }
};

bool Library::removeBooks(string &ISBN){
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

int main(){
    Library l;

    string t="A", a="B", i="1";
    l.addNewBook(t,a,i);

    t="C"; a="D"; i="2";
    l.addNewBook(t,a,i);

    t="E"; a="F"; i="3";
    l.addNewBook(t,a,i);

    t="G"; a="H"; i="4";
    l.addNewBook(t,a,i);

    t="I"; a="J"; i="5";
    l.addNewBook(t,a,i);

    l.removeBooks(i);   // remove last

    l.displayDetails();

    return 0;
}