#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>res;
void per(int i,vector<int>&nums){
    if(i>=nums.size()){
        res.push_back(nums);
        return;
    }
    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        per(i+1,nums);
        swap(nums[i],nums[j]); //backtrack
    }
}
int main()
{
    vector<int>nums={1,2,3};
    per(0,nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}