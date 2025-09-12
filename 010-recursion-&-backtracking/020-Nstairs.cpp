#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void Nstairs(int n,int k){
    if(n<0){
        return;
    }
    if(n==0){
        cnt++;
        return;
    }
    for(int i=1;i<=k;i++){
        Nstairs(n-i,k);
    }
}
int main()
{
    int n=10;
    int k=3;
    Nstairs(n,k);
    cout<<cnt;
    return 0;
}