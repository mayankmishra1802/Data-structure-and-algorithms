#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>&nums,int i,int target){
    if(nums[i]==target){
        return i;
    }
    if(i==nums.size()-1){
        return -1;
    }
    firstOccurence(nums,++i,target);
}
int main()
{
    vector<int>nums={2,3,4,2,3,6};
    cout<<firstOccurence(nums,0,2);
    return 0;
}