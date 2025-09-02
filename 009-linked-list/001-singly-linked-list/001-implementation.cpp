#include<bits/stdc++.h>
using namespace std;
class node{ 

    public:
    int data;
    node*next;
};
void PrintLLByReference(node* &head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void PrintLLByValue(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node a,b,c;
    a.data=1; //initializibg data bucket of node a
    b.data=2;
    c.data=3;

    a.next=&b; //store address of node b to node a
    b.next=&c;
    c.next=NULL; //last node ke next ko empty nhi rkhte isliye NULL 
    
    node*head=&a,*tail=&c; //intializing head and tail 

    //PrintLLByReference(head); // head ki value update hoti h

    PrintLLByValue(head); // nhi hogi update

    cout<<endl<<&a<<endl; 
    cout<<head;
    return 0;
}