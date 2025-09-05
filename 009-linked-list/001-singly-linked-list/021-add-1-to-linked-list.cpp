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
node *addOne(node *head) {
    if(head==NULL){
        return head;
    }
    node*temp=head;
    int sum=0;
    while(temp){
        sum=sum*10+temp->data;
        temp=temp->next;
    }
    sum=sum+1;
    node*nh=NULL;
    while(sum>0){
        int x=sum%10;
        insertion(nh,x);
        sum=sum/10;
    }
    return nh;
}
int main()
{
    node*head=NULL;
    insertion(head,3);
    insertion(head,2);
    insertion(head,1);
    PrintLL(head);
    PrintLL(addOne(head));
    return 0;
}