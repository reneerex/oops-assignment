#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("data.txt");

    file.seekg(10);
    cout<<"position = "<<file.tellg()<<endl;

    char ch;
    while(file.get(ch)){
        cout<<ch;
    }

    file.close();
    return 0;
}