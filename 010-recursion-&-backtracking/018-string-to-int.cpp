#include<bits/stdc++.h>
using namespace std;
int n=0;
int convert(string &s,int i){
    if(s[i]=='\0'){
        return n;
    }
    n=n*10+(s[i]-'0');
    convert(s,i+1);
}
int main()
{
    string s="4329";
    cout<<convert(s,0);
    return 0;
}