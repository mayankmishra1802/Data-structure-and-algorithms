#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int v){
        data=v;
        next=NULL;
    }
};
class MyQueue{
    private:
    node* front;
    node* rear;
    public:
    MyQueue(){
        front = rear = NULL;
    }
    void push(int x) {
        node* n = new node(x);
        if (rear==NULL) {
            front=rear=n;
            return;
        }
        rear->next=n;
        rear=n;
    }
    void pop() {
        if(front==NULL){
            cout<<"MyQueue is empty"<<endl;
            return;
        }
        node*temp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete temp;
    }
    int peek(){
        if(front==NULL){
            cout<<"MyQueue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    bool isEmpty() {
        return front==NULL;
    }
};
int main() {
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    return 0;
}
