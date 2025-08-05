#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int m=n/2;
    for(int i=1;i<=(n-m);i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=m-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}