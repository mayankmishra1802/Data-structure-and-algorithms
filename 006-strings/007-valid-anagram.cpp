#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
vector<int>freq(26,0);
    if(s.size()>t.size() || s.size()<t.size()){
        return false;
    }
    else{
        for(int i=0;s[i]!='\0';i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;t[i]!='\0';i++){
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]>0){
               return false;
            }  
        }
    }
    return true;
}
int main()
{
    string s="anagram";
    string t="nagaram";
    cout<<isAnagram(s,t);
    return 0;
}