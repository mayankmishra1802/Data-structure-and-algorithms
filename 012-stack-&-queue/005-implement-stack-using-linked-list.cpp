#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int v) {
        data = v;
        next = NULL;
    }
};
class Mystack{
    node* head;
    public:
    Mystack(){
        head = NULL;
    }
    void push(int x) {
        node* n = new node(x);
        n->next = head;
        head = n;
    }
    void pop() {
        if (head == NULL) {
            cout << "Mystack Underflow!" << endl;
            return;
        }
        node* temp = head;
        head = head->next;
        delete temp;
    }
    int top() {
        if (head == NULL) {
            cout << "Mystack is empty!" << endl;
            return -1;
        }
        return head->data;
    }
    bool isEmpty() {
        return head == NULL;
    }
};

int main() {
    Mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl; 
    s.pop();
    cout<<s.top()<<endl; 
    return 0;
}
