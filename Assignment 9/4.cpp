#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("a.txt");
    ofstream fout("b.txt");

    char ch;

    while(fin.get(ch)){
        fout.put(ch);
    }

    fin.close();
    fout.close();

    return 0;
}