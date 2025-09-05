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
node* oddEvenList(node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    node*oh=NULL,*eh=NULL;
    node*ot=NULL,*et=NULL;
    int i=1;
    node*temp=head;
    while(temp){
        if(i%2!=0){
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
            if(eh==NULL){
                eh=temp;
                et=eh;
            }
            else{
                et->next=temp;
                et=temp;
            }
        }
        i++;
        temp=temp->next;
    }
    ot->next=eh;
    et->next=NULL;
    head=oh;
    return head;
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
    PrintLL(oddEvenList(head));
    return 0;
}