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
node* addTwoNumbers(node* l1, node* l2) {
    node *dummy = new node(); 
    node *temp = dummy; 
    int carry = 0;
    while( (l1 != NULL || l2 != NULL) || carry) {
        int sum = 0; 
        if(l1 != NULL) {
            sum += l1->data; 
            l1 = l1 -> next; 
        }
        if(l2 != NULL) {
            sum += l2 -> data; 
            l2 = l2 -> next; 
        }
        sum += carry; 
        carry = sum / 10; 
        node *n= new node(sum % 10); 
        temp -> next = n; 
        temp = temp -> next; 
    }
    return dummy -> next; 
}
int main()
{
    node*head1=NULL;
    node*head2=NULL;
    insertion(head1,3);
    insertion(head1,4);
    insertion(head1,2);
    PrintLL(head1);
    insertion(head2,4);
    insertion(head2,6);
    insertion(head2,5);
    PrintLL(head2);
    PrintLL(addTwoNumbers(head1,head2));
    return 0;
}