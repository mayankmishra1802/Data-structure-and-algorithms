#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=0;i<n;i++){
        char ch=65;
        for(int j=n-i;j>0;j--){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}