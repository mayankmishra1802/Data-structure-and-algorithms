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
node* merge(node*head1,node*head2){
    if (head1 == NULL) return head2;
	if (!head2) return head1;
    node*newhead=NULL;
    if(head1->data < head2->data){
        newhead=head1;
        newhead->next=merge(head1->next,head2);
    }
    else{
        newhead=head2;
        newhead->next=merge(head1,head2->next);
    }
    return newhead;
}
int main()
{
    
    node*head1,*tail1;
    node*head2,*tail2;
    head1=tail1=NULL; 
    head2=tail2=NULL;
    
    insert_at_end(head1,tail1,1);
    insert_at_end(head1,tail1,3);
    insert_at_end(head1,tail1,5);
    insert_at_end(head2,tail2,2);
    insert_at_end(head2,tail2,4);
    insert_at_end(head2,tail2,6);
    PrintLL(head1); //1st LL
    PrintLL(head2); //2nd LL
    merge(head1,head2); 
    PrintLL(head1);  //merged LL
    return 0;
}