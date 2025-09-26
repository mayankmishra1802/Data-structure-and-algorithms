#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={1,-1};
    int k=1;
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<k;i++){
        while(!dq.empty() && nums[dq.front()]<=nums[i]){
            dq.pop_front();
        }
        dq.push_back(i);
    }

    for(int i=k;i<nums.size();i++){
        ans.push_back(nums[dq.front()]);
        while(!dq.empty() && dq.front()<=i-k){  //remove elements thats are not the part of sliding window
            dq.pop_front();
        }
        while(!dq.empty() && nums[dq.front()]<=nums[i]){
            dq.pop_front();
        }
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}