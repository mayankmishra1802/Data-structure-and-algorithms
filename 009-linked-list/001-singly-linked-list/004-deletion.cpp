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

int length(node*head){  
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
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

void deletion_at_front(node*&head,node*&tail){
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node*temp=head;
        head=head->next;
        delete temp;
    }
}

void deletion_at_end(node*&head,node*&tail){
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    else{
        node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }
}

void deletion_at_middle(node*&head,node*&tail,int pos){
    if(pos==0){
        deletion_at_front(head,tail);
    }
    else if(pos>=length(head)-1){
        deletion_at_end(head,tail);
    }
    else{
        node*temp=head;
        for(int i=1;i<pos;i++){
            temp=temp->next;
        }
        node*n=temp->next;
        temp->next=n->next;
        delete n;
    }
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
    deletion_at_front(head,tail);
    PrintLL(head);
    deletion_at_end(head,tail);
    PrintLL(head);
    deletion_at_middle(head,tail,2); 
    PrintLL(head);
    return 0;
}