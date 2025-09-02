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
int cycle_starting_point(node*head){ 
    if (head == NULL || head->next==NULL){
        return -1;
    }
    node*sp=head;
    node*fp=head;
    while(fp!=NULL  && fp->next!=NULL){
        fp=fp->next->next;
        sp=sp->next;
        if(sp==fp){
            sp=head;
            while(sp!=fp){
                sp=sp->next;
                fp=fp->next;
            }
            return sp->data;
        }
    }
    return -1;
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
    cout<<cycle_starting_point(head);
    return 0;
}