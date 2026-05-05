#include <iostream>
using namespace std;

template <class T>
class Queue{
    T arr[5];
    int front, rear;

public:
    Queue(){
        front = rear = -1;
    }

    void enqueue(T x){
        if(rear == 4){
            cout<<"overflow"<<endl;
            return;
        }
        if(front == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue(){
        if(front == -1 || front > rear){
            cout<<"underflow"<<endl;
            return;
        }
        front++;
    }

    void display(){
        for(int i=front;i<=rear;i++)
            cout<<arr[i]<<" ";
    }
};

int main(){
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.display();

    return 0;
}