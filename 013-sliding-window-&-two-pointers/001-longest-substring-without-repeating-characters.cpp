#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcabcbb";
    int l=0,r=0,maxlength=0;
    int n=s.size();
    unordered_map<char,int>m;
    while(r<n){
        while(m.find(s[r])!=m.end() && m[s[r]]>=l){
            l=m[s[r]]+1;
        }
        m[s[r]]=r;
        maxlength=max(maxlength,r-l+1);
        r++;
    }
    cout<<maxlength;
    return 0;
}