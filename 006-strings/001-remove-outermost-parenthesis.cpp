#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="(()())(())";
    string ans="";
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){ 
            cnt++;
            if(cnt>1){  //cnt=1 means outermost open parenthesis
                ans+=s[i];
            }
        }
        else{
            cnt--;
            if(cnt>0){ //cnt=0 means outermost closed parenthesis
                ans+=s[i];
            }
        }
    }
    cout<<ans;
    return 0;
}