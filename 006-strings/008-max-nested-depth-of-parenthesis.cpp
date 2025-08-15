#include<bits/stdc++.h>
using namespace std;
int maxDepth(string s) {
    int ans=0;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            cnt++;
            ans=max(cnt,ans);
        }
        else if(s[i]==')'){
            cnt--;
        }
    }
    return ans;
}
int main()
{
    string s="(1+(2*3)+((8)/4))+1";
    cout<<maxDepth(s);
    return 0;
}