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

bool cycledetection(node*head){
    if (head == NULL || head->next == NULL){
        return false;
    }
    node*sp=head; //slow pointer
    node*fp=head; //fast pointer
    while(fp!=NULL && fp->next!=NULL){
        sp=sp->next;
        fp=fp->next->next;
        if(sp==fp){  //cycle detected
            return true;
        }
    }
    return false;
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
    (cycledetection(head))?cout<<"yes":cout<<"no";
    return 0;
}