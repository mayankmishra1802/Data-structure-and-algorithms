#include<bits/stdc++.h>
using namespace std;
vector<int>nums={2,5,2,1,2};
int target=4;
vector<vector<int>>res;
void sub(int i,int target,vector<int>s){
    if(target==0){
        res.push_back(s);
        return;
    }
    if(target<0){
        return;
    }
    for(int j=i;j<nums.size();j++){ //skip duplicates at same level of recursion
        if(j>i && nums[j]==nums[j-1]){
            continue;
        }
        if(nums[j]>target){
            break;
        }
        s.push_back(nums[j]);
        sub(j,target-nums[j],s);
        s.pop_back();
    }
}
int main()
{
    sort(nums.begin(),nums.end());
    sub(0,target,{});
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}