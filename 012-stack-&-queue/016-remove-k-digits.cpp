#include<bits/stdc++.h>
using namespace std;
string removeKDigits(string s,int k){
    stack<char>st;
    string ans="";
    for(int i=0;i<s.size();i++){
        while (!st.empty() && k>0 && s[i]-'0'<st.top()-'0') {
            st.pop();
            k--;
        }
        st.push(s[i]);
    }
    while(k>0){
        st.pop();
        k--;
    }
    if(st.empty()){
        return "0";
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    while(ans.size()!=0 && ans.back()=='0'){
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    if(ans.size()==0){
        return "0";
    }
    return ans;
}
int main(){
    string s="10200";
    int k=2;
    cout<<removeKDigits(s,k);
    return 0;
}