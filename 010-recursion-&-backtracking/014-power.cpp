#include<bits/stdc++.h>
using namespace std;
int p(int x,int n){
    if(n==0){
        return 1;
    }
    return x*p(x,n-1);
}
int main()
{
    cout<<p(2,3);
    return 0;
}