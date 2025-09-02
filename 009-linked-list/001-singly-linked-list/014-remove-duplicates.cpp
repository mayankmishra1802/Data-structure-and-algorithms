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

void duplicates(node*&head){
    node*temp=head->next,*p=NULL;
    while(temp!=NULL){
        if(temp->next!=NULL && temp->data==temp->next->data){
            int value=temp->data;
            while(temp!=NULL && temp->data==value){
                temp=temp->next;
            }
            if(p!=NULL){
                p->next=temp;
            }
            else{
                head=temp;
            }
        }
        else{
            p=temp;
            temp=temp->next;
        }
    }
}
int main()
{
    
    node*head,*tail;
    head=tail=NULL; 
    
    insert_at_end(head,tail,1);
    insert_at_end(head,tail,2);
    insert_at_end(head,tail,3);
    insert_at_end(head,tail,3);
    insert_at_end(head,tail,4);
    insert_at_end(head,tail,4);
    insert_at_end(head,tail,5);
    PrintLL(head);
    duplicates(head);
    PrintLL(head);
    return 0;
}