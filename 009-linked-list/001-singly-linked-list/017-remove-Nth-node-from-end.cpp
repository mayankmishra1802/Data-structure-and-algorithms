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
node* removeNthFromEnd(node* head, int n) {
    if(length(head)==n){
        head=head->next;
        return head;
    }
    else{
        node*temp=head;
        int l=length(head);
        for(int i=1;i<l-n;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        if(length(head)!=0){
            return head;
        }
    }
    return NULL;
}
int main()
{
    node*head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    PrintLL(head);
    PrintLL(removeNthFromEnd(head,2));
    return 0;
}