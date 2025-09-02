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

int length(node*head){  //length of LL
    int cnt=0;//count nodes
    node*temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void insert_at_front(node*&head,node*&tail,int data){ 
    if(head==NULL){  //if LL is empty;
        node*n= new node(data); 
        head=tail=n;
    }
    else{
        node*n=new node(data);
        n->next=head;
        head=n;
    }
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

void insert_at_middle(node*&head,node*&tail,int pos,int data){
    if(pos==0){
        insert_at_front(head,tail,data);
    }
    else if(pos>=length(head)){
        insert_at_end(head,tail,data);
    }
    else{
        node*temp=head;
        for(int i=1;i<pos;i++){
            temp=temp->next;
        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;
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
    insert_at_middle(head,tail,3,6);
    PrintLL(head);

    return 0;
}