#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=456;
    int cnt=0;
    while(n>0){
        cnt++;
        n=n/10;
    }
    cout<<"total no of digits:"<<cnt;
    return 0;
}