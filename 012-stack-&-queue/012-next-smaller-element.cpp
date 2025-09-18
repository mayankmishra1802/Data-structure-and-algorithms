#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={10, 9, 8, 7};
    vector<int>ans;
    stack<int>s;
    for(int i=nums.size()-1;i>=0;i--){
        while(!s.empty() && s.top()>=nums[i]){
            s.pop();
        }
        if(s.empty()){
            s.push(-1);
        }
        if(s.top()<nums[i]){
            ans.push_back(s.top());
        }
        s.push(nums[i]);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}