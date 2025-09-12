#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
void com(int n,int k,vector<int>s,int i,int sum){
    if(n<k){
        res.push_back(s);
        return ;
    }
    if(s.size()==k && sum==n){
        res.push_back(s);
    }
    for(int j=i;j<=9;j++){
        s.push_back(j);
        sum+=j;
        com(n,k,s,j+1,sum);
        sum-=j;
        s.pop_back();
    }
}
int main()
{
    int n=9,k=3;
    com(n,k,{},1,0);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}