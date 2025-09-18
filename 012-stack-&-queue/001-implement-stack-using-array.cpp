#include <bits/stdc++.h>
using namespace std;
class Stack{
    int top_element_idx;
    int *arr;
    int size;
    public:
    Stack(){
        top_element_idx=-1;
        size=1000;
        arr=new int[size];
    }
    ~Stack(){
        delete[] arr;
    }
    void push(int x){
        if (top_element_idx>=size-1) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top_element_idx] = x;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return arr[top_element_idx--];
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top_element_idx];
    }
    bool isEmpty(){
        return top_element_idx==-1;
    }
};

int main() {
    Stack s;
    cout<<s.isEmpty()<<endl; 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.pop()<<endl;     
    cout<<s.top()<<endl;     
    cout<<s.isEmpty()<<endl; 
    return 0;
}
