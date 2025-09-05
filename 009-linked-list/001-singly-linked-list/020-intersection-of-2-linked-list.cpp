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
    while(head){
        cnt++;
        head=head->next;
    }
    return cnt;
}
node *getIntersectionNode(node *headA, node *headB) {
    if(headA==NULL){
        return NULL;
    }
    if(headB==NULL){
        return NULL;
    }
    int la=length(headA);
    int lb=length(headB);
    if(la>lb){
        int diff=la-lb;
        int i=0;
        while(i<diff){
            headA=headA->next;
            i++;
        }
    }
    else{
        int diff=lb-la;
        int i=0;
        while(i<diff){
            headB=headB->next;
            i++;
        }
    }
    while(headA && headB){
        if(headA==headB){
            return headA;
        }
        headA=headA->next;
        headB=headB->next;
    }
    return NULL;
}
int main()
{
    //leetcode 160
    return 0;
}