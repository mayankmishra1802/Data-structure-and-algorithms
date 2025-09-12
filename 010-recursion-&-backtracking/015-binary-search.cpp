#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>&nums,int target,int s,int e){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]>target){
        BinarySearch(nums,target,s,mid-1);
    }
    else{
        BinarySearch(nums,target,mid+1,e);
    }
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    cout<<BinarySearch(nums,10,0,nums.size()-1);
    return 0;
}