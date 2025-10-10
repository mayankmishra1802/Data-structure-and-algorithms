#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="AABABBA";
    int k=1;
    int n=s.size();
    int r=0,l=0;
    unordered_map<char,int>m;
    int maxfreq=0,result=0;
    while(r<n){
        m[s[r]]++;
        maxfreq=max(maxfreq,m[s[r]]);
        if(r-l+1-maxfreq>k){
            m[s[l]]--;
            l++;
        }
        result=max(result, r - l + 1);
        r++;
    }
    cout<<result;
    return 0;
}