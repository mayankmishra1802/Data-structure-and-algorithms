#include<bits/stdc++.h>
using namespace std;
// int sum(int s,int n){ //parameterized way
//     if(n==0){ 
//         return s;
//     }
//     s=s+n;
//     sum(s,n-1);
// }

int sum(int n){ //functional way
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main()
{
    int n=10;
    //cout<<sum(0,n);
    cout<<sum(n);
    return 0;
}