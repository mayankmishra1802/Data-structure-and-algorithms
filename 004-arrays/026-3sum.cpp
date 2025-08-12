#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++){
        if(i>0 &&nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1,k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                //cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                j++;k--;
                while(j<k && nums[j]==nums[j-1]){
                    j++;
                }
            }
            else if(sum>0){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>>v=threeSum(nums);
    return 0;
}