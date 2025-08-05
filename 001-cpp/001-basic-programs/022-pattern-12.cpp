#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int m=n/2;
    //first half
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=m-i;j>0;j--){
            cout<<"*";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<" ";
        }
        for(int j=m-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    //second half
    for(int i=1;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<2*m-2*i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    return 0;
}