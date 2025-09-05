#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(){
        data=0;
        next=NULL;
    }
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
    while(head){
        cnt++;
        head=head->next;
    }
    return cnt;
}
node* rotateRight(node* head, int k) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    int n=length(head);
    k=k%n;
    for(int i=0;i<k;i++){
        node*tail=head->next;
        node*prev=head;
        while(tail->next){
            prev=prev->next;
            tail=tail->next;
        }
        tail->next=head;
        prev->next=NULL;
        head=tail;
    }
    return head;
}
int main()
{
    node*head=NULL;
    int k=2;
    insertion(head,5);
    insertion(head,4);
    insertion(head,3);
    insertion(head,2);
    insertion(head,1);
    PrintLL(head);
    PrintLL(rotateRight(head,k));
    return 0;
}