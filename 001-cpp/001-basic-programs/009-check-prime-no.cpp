#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive number:";
    cin>>n;
    int i=2;
    if(n==1){
        cout<<"false";
    }
    while(i<n){
        if(n%i==0){
            cout<<"false";
            break;
        }
        i++;
    }
    if(i>=n &&n!=1){
        cout<<"true";
    }
    return 0;
}