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

node* kthNode(node*head,int k){
    if (head == NULL || head->next == NULL){
        return head;
    }
    node*sp=head; 
    node*fp=head; 
    int i=0;
    while(i<3){
        fp=fp->next;
        i++;
    }
    while(fp!=NULL){
        fp=fp->next;
        sp=sp->next;
    }
    return sp;
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
    node*ans=kthNode(head,3);
    cout<<ans->data;
    return 0;
}