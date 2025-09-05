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
void insertion(node*&head,int d){
    node*n=new node(d);
    if(head==NULL){
        head=n;
    }
    else{
        n->next=head;
        head=n;
    }
}
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
node* deleteMiddle(node* head) {
    int n=length(head)/2;
    if(n==0){
        head=head->next;
        return head;
    }
    node*temp=head;
    for(int i=0;i<n-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main()
{
    node*head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,6);
    insertion(head,7);
    insertion(head,4);
    insertion(head,3);
    insertion(head,1);
    PrintLL(head);
    PrintLL(deleteMiddle(head));
    return 0;
}