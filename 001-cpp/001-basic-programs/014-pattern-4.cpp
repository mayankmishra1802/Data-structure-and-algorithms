#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int num;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            num=0;
        }
        else{
            num=1;
        }
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=1-num;
        }     
        cout<<endl;   
    }
    return 0;
}