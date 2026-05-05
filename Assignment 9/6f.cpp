#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file("test.txt", ios::out | ios::in);

    string str = "HelloWorld";

    for(int i=0;i<str.length();i++){
        file.put(str[i]);
        cout<<"pos = "<<file.tellp()<<endl;
    }

    file.seekp(5);
    file<<"C++";

    file.close();
    return 0;
}