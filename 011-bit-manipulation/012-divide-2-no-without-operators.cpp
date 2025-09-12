#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dividend=10;
    int divisor=3;
    int ans=0;
    int i=0;
    while(dividend>=divisor){
        if((divisor<<i)>dividend){
            dividend-=(divisor<<(i-1));
            ans+=(1<<(i-1));
            i=0;
        }
        else{
            i++;
        }
    }
    cout<<ans;
    return 0;
}