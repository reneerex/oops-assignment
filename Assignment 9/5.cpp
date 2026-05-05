#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
    char str[50];

    cout<<"enter string: ";
    cin>>str;

    cout<<"length = "<<strlen(str)<<endl;

    ofstream fout("str.txt");
    fout<<str;
    fout.close();

    ifstream fin("str.txt");
    char ch;

    while(fin.get(ch)){
        cout<<ch;
    }

    fin.close();
    return 0;
}