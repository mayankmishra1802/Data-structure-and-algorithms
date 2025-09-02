#include<bits/stdc++.h>
using namespace std;
class node{ 
    public:
    int data;
    node*next;
    node(int d){ //constructor to create a node
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
    if(head==NULL){  //if LL is empty;
        node*n= new node(data); 
        head=tail=n;
    }
    else{
        node*n= new node(data);
        tail->next=n;
        tail=n;
    }
}

bool search(node*head,int target){
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
    
    node*head,*tail;
    head=tail=NULL; 
    int target =3;
    insert_at_end(head,tail,1);
    insert_at_end(head,tail,2);
    insert_at_end(head,tail,3);
    insert_at_end(head,tail,4);
    insert_at_end(head,tail,5);
    PrintLL(head);
    cout<<search(head,target);

    return 0;
}