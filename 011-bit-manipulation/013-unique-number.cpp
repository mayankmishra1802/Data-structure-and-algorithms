#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the no. of inputs:";
    cin>>n;
    cout<<"enter the sequence of +ve numbers:"<<endl;
    int u=0;
    for(int i=1;i<=n;i++){
        cin>>m;
        u=u^m;
    }
    cout<<"unique number is:"<<u;
    return 0;
}