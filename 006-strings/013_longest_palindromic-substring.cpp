#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s) {
    if(s.empty()){
        return "";
    }
    int maxLen = 0;
    string ans="";
    for(int i=0;i<s.size();i++) {
        int l=i,r=i; //odd length palindrome
        while(l>=0 && r<s.size() && s[l]==s[r]){
            string temp=s.substr(l,r-l+1);
            if(temp.size()>maxLen){
                ans=temp;
                maxLen=temp.size();
            }
            l--;
            r++;
        }
        l=i; //even length palindrome
        r=i+1;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            string temp=s.substr(l,r-l+1);
            if(temp.size()>maxLen){
                ans=temp;
                maxLen=temp.size();
            }
            l--;
            r++;
        }
    }
    return ans;
}
int main()
{
    string s="babad";
    cout<<longestPalindrome(s);
    return 0;
}