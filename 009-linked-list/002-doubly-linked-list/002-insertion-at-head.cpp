#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
node* insertBeforeHead(node* head, int x) {
    node*n= new node(x);
    if(head==NULL){
        head=n;
    }
    else{
        head->prev=n;
        n->next=head;
        head=n;
    }
    return head;
}
void printDLL(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int main()
{
    node* head = NULL;
    head = insertBeforeHead(head, 10);
    head = insertBeforeHead(head, 20);
    head = insertBeforeHead(head, 30);
    printDLL(head);
    return 0;
}