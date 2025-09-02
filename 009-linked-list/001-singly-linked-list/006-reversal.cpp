#include<bits/stdc++.h>
using namespace std;
class node{ 
    public:
    int data;
    node*next;
    node(int d){ 
        data=d;
        next=NULL;
    }
};

void PrintLL(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

void insert_at_end(node*&head,node*&tail,int data){
    if(head==NULL){  
        node*n= new node(data); 
        head=tail=n;
    }
    else{
        node*n= new node(data);
        tail->next=n;
        tail=n;
    }
}

void reverse(node*&head,node*&tail){
    node*current,*previous,*n;
    current=head;
    previous=NULL;
    while(current!=NULL){
        n=current->next;
        current->next=previous;
        previous=current;
        current=n;
    }
    swap(head,tail);
}
int main()
{
    
    node*head,*tail;
    head=tail=NULL; 
    
    insert_at_end(head,tail,1);
    insert_at_end(head,tail,2);
    insert_at_end(head,tail,3);
    insert_at_end(head,tail,4);
    insert_at_end(head,tail,5);
    insert_at_end(head,tail,6);
    insert_at_end(head,tail,7);
    PrintLL(head);
    reverse(head,tail);
    PrintLL(head);
    return 0;
}