#include<bits/stdc++.h>
using namespace std;
int check(int m,int n,int mid){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans*=mid;
        if(ans>m){
            return 2;
        }
    }
    if(ans==m){
        return 1;
    }
    return 0;
}
int NthRoot(int m,int n){
    int s=1,e=m;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(check(m,n,mid)==1){
            return mid;
        }
        else if(check(m,n,mid)==0){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n=3,m=27;
    cout<<NthRoot(m,n);
    return 0;
}