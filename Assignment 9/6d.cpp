#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("file.txt");

    file.seekg(-1, ios::end);
    char ch;
    file.get(ch);

    cout<<ch;

    file.close();
    return 0;
}