#include<bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal) {
    int n=s.length();
    if(s.length()!=goal.length()){
         return false;
    }
    else{
        for(int i=0;i<n;i++){
            s=s+s[i];
            if(s.substr(i,n)==goal){
                return true;
            }
        }
        return false;
    }
}
int main()
{
    string s="abcde";
    string goal="cdeab";
    cout<<rotateString(s,goal);
    return 0;
}