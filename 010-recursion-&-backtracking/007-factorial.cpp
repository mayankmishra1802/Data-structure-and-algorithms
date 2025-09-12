#include<bits/stdc++.h>
using namespace std;
int f(int n){ 
    if(n<=1){
        return 1;
    }
    return n*f(n-1);
}
int main()
{
    int n=4;
    cout<<f(n);
    return 0;
}