#include<bits/stdc++.h>
using namespace std;
long long Sqrt(long long n){
    long long s=0,e=n;
    long long ans=0;
    while(s<=e){
        long long mid=(e+s)/2;
        if(mid<=(n/mid)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    long long n=30;
    cout<<Sqrt(n);
    return 0;
}