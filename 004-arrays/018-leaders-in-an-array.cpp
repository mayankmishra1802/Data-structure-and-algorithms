#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& nums) {
    vector<int>ans;
    ans.push_back(nums[nums.size()-1]);
    for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]>=nums[i+1] && nums[i]>=ans[ans.size()-1]){
            ans.push_back(nums[i]);
        }
    }
    int i=0,j=ans.size()-1;
    while(i<j){
        swap(ans[i],ans[j]);
        i++;j--;
    }
    return ans;
}
int main()
{
    vector<int>nums={16, 17, 4, 3, 5, 2};
    vector<int>v=leaders(nums);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}