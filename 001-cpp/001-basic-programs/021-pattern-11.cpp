#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int m=n/2;
    //first half
    for(int i=1;i<=n-m;i++){
        for(int k=m+1-i;k>0;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int l=1;l<i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    //second half
    for(int i=1;i<=m;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=m+1-i;j>0;j--){
            cout<<"*";
        }
        for(int l=m-i;l>0;l--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}