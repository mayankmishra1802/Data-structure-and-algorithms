#include<bits/stdc++.h>
using namespace std;
int LastOccurence(vector<int>&nums,int i,int target){
    if(nums[i]==target){
        return i;
    }
    if(i==0){
        return -1;
    }
    LastOccurence(nums,--i,target);
}
int main()
{
    vector<int>nums={2,3,4,2,3,6};
    cout<<LastOccurence(nums,nums.size()-1,2);
    return 0;
}