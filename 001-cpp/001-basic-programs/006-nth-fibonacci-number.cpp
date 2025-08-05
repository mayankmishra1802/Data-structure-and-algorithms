#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a +ve number:";
    cin>>n;
    if(n==0 || n==1){
        cout<<n<<"th fibonacci number is:"<<n;
    }
    else{
        int a=0,b=1,c;
        for(int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<n<<"th fibonacci number is:"<<c;
    }
    return 0;
}