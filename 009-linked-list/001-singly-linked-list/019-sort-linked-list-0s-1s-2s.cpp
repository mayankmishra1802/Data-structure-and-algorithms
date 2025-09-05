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
node *sortList(node *head){
    node*zh=NULL,*oh=NULL,*th=NULL;
    node*zt=NULL,*ot=NULL,*tt=NULL;
    node*temp=head;
    while(temp){
        if(temp->data==0){
            if(zh==NULL){
                zh=temp;
                zt=zh;
            }
            else{
                zt->next=temp;
                zt=temp;
            }
        }
        else if(temp->data==1){
            if(oh==NULL){
                oh=temp;
                ot=oh;
            }
            else{
                ot->next=temp;
                ot=temp;
            }
        }
        else{
            if(th==NULL){
                th=temp;
                tt=th;
            }
            else{
                tt->next=temp;
                tt=temp;
            }
        }
        temp=temp->next;
    }
    zt->next=oh;
    ot->next=th;
    tt->next=NULL;
    head=zh;
    return head;
}
int main()
{
    node*head=NULL;
    insertion(head,1);
    insertion(head,0);
    insertion(head,2);
    insertion(head,0);
    insertion(head,1);
    PrintLL(head);
    PrintLL(sortList(head));
    return 0;
}