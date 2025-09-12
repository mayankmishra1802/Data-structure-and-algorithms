#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=32;
    if(n>0 && (n & (n-1))==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}