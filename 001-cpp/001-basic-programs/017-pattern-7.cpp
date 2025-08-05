#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        int x=i;
        for(int k=n-i;k>0;k--){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<x++<<" ";
        }
        for(int y=(2*i)-2;y>i-1;y--){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}