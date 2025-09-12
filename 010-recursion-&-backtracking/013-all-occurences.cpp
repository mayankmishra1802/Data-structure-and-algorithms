#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
void Occurences(vector<int>&nums,int i,int target){
    if(nums[i]==target){
        ans.push_back(i);
    }
    if(i==nums.size()-1){
        return;
    }
    Occurences(nums,++i,target);
}
int main()
{
    vector<int>nums={2,3,4,2,3,6};
    Occurences(nums,0,2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}