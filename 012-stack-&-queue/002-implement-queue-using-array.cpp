#include <bits/stdc++.h>
using namespace std;
class Queue {
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue(){
        size=1000;
        arr=new int[size];
        front=0;
        rear=-1;
    }
    ~Queue(){
        delete[] arr;
    }
    void push(int x){
        if (rear==size-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        arr[++rear]=x;
    }
    int pop(){
        if (isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        return arr[front++];
    }
    int peek(){
        if (isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        return (front > rear);
    }
};

int main() {
    Queue q;
    cout << q.isEmpty() << endl; 
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<q.peek()<<endl; 
    cout<<q.pop()<<endl; 
    cout<<q.peek()<<endl; 
    cout<<q.isEmpty()<<endl; 
    return 0;
}
