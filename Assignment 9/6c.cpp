#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("file.txt");

    file.seekg(0, ios::end);
    cout<<"size = "<<file.tellg();

    file.close();
    return 0;
}