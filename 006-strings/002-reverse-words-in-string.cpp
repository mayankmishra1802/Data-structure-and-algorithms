#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    vector<string>str;
    string m="";
    for(int i=0;i<s.size();i++){
        if (s[i]!=' '){
            m+=s[i];
        } 
        else{
            if(!m.empty()){
                str.push_back(m);
                m="";
            }
        }
    }
    if(!m.empty()){
        str.push_back(m);
    }
    string ans = "";
    for(int i=str.size()-1;i>=0;i--){
        ans+=str[i];
        if(i!=0){
            ans += ' ';
        }
    }
    return ans;
}
int main()
{
    string s="the sky is blue";
    cout<<reverseWords(s);
    return 0;
}