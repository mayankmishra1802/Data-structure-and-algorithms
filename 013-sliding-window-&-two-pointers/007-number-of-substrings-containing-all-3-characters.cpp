#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcabc";
    int n=s.size();
    int cnt=0;
    vector<int>lastseen(3,-1);
    for(int i=0;i<n;i++){
        lastseen[s[i]-'a']=i;
        if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1){
            int min_idx=min(lastseen[0],min(lastseen[1],lastseen[2]));
            cnt+=min_idx+1;
        }
    }
    cout<<cnt;
    return 0;
}