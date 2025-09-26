#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={100,80,60,70,60,75,85};
    stack<pair<int,int>>s;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        int span=1;
        while(!s.empty() && s.top().first<=nums[i]){
            span+=s.top().second;
            s.pop();
        }
        ans.push_back(span);
        s.push({nums[i],span});
    }
    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}