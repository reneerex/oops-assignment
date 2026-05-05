#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("NOTES.TXT");
    char ch;
    int count = 0;

    while(file.get(ch)){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
            count++;
    }

    cout<<"alphabets = "<<count;

    file.close();
    return 0;
}