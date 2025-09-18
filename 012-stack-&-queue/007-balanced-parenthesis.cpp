#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="([)]";
    stack<int>st;
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]== '['){
            st.push(s[i]);
        }
        else{
            if (st.empty()) return false;
            if((s[i]==')' && st.top()=='(') ||(s[i]==']' && st.top()=='[')||(s[i]=='}' && st.top()=='{')){
                st.pop();
            }
            else{
                flag=false;
                break;
            }
        }
    }
    if(!st.empty()){
        flag = false;
    }
    cout<<flag;
    return 0;
}