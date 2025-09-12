#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=13;
    int cnt=0;
    while(n>1){
        cnt+=n&1;
        n=n>>1;
    }
    if(n==1) cnt++;
    cout<<cnt;
    return 0;
}