#include<bits/stdc++.h>
using namespace std;
void binarystrings(string s,int i,int n){
    if(i==n){
        cout<<s<<endl;
        return ;
    }
    if(s.empty()){
        binarystrings(s+"1",i+1,n);
        binarystrings(s+"0",i+1,n);
    }
    else if(s[i-1]=='0'){
        binarystrings(s+"1",i+1,n);
    }
    else{
        binarystrings(s+"1",i+1,n);
        binarystrings(s+"0",i+1,n);
    }
}
int main()
{
    int n=3;
    binarystrings("",0,n);
    return 0;
}