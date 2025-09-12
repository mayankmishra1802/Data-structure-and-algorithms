#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
void com(int n,int k,vector<int>s,int i){
    if(s.size()==k){
        res.push_back(s);
    }
    for(int j=i;j<=n;j++){ 
        s.push_back(j);
        com(n,k,s,j+1);
        s.pop_back();
    }
}
int main()
{
    int n=4,k=2;
    com(n,k,{},1);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}