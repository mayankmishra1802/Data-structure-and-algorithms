#include<bits/stdc++.h>
using namespace std;

string conversion(int n){
    string s="";
    while(n>=1){
        if(n%2==1){
            s+='1';
        }
        else{
            s+='0';
        }
        n=n/2;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    int n=7;
    cout<<conversion(n);
    return 0;
}