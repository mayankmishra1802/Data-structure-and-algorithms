#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number to check:";
    cin>>n;
    int a=0,b=1,c;
    if(n==a){
        cout<<"true";
    }
    int i=0;
    while(i<=n){
        c=a+b;
        if(n==c){
            cout<<"true";
            break;
        }
        a=b;b=c;i++;
    }
    if(i>n && n!=0){
        cout<<"false";
    }
    return 0;
}