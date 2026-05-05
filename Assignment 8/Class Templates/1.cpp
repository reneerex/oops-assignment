#include <iostream>
using namespace std;

template <class T>
class Stack{
    T arr[5];
    int top;

public:
    Stack(){
        top = -1;
    }

    void push(T x){
        if(top == 4){
            cout<<"overflow"<<endl;
            return;
        }
        arr[++top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"underflow"<<endl;
            return;
        }
        top--;
    }

    void display(){
        for(int i=0;i<=top;i++)
            cout<<arr[i]<<" ";
    }
};

int main(){
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.display();

    return 0;
}