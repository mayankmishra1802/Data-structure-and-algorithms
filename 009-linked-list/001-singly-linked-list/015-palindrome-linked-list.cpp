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
bool palindrome(vector<int>&nums){
    int i=0,j=nums.size()-1;
    while(i<j){
        if(nums[i]!=nums[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}
int main()
{
    node*head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,2);
    insertion(head,1);
    PrintLL(head);
    vector<int>nums;
    node*temp=head;
    while(temp!=NULL){
        nums.push_back(temp->data);
        temp=temp->next;
    }
    (palindrome(nums))?cout<<"true":cout<<"false";
    return 0;
}