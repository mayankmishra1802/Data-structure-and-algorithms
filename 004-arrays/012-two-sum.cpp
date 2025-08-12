#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>m;
    for(int i=0;i<nums.size();i++){
        int s=target-nums[i];
        if(m.find(s)!=m.end()){
            return{m[s],i};
        }
        m[nums[i]]=i;
    }
    return{};
}
int main()
{
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>v=twoSum(nums,target);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}