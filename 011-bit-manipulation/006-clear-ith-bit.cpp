//clear the ith bit means making the ith bit 0
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=13;
    int i=2;
    if(((n>>i)&1)==0){
        cout<<"ith bit is already cleared";
    }
    else{
        n=n&(~(1<<i));
        cout<<"ith bit is cleared";
    }
    cout<<endl<<n;
    return 0;
}