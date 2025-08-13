#include<bits/stdc++.h>
using namespace std;
int floor(vector<int>&nums,int x){
    int s=0,e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]<=x && (mid==nums.size()-1 || nums[mid+1]>x)){
            return nums[mid];
        }
        else if(nums[mid]>x){
            e=mid-1;
        }
        else{
            s=mid-1;
        }
    }
    return -1;
}
int ceil(vector<int>&nums,int x){
    int s=0,e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]>=x && (mid==0 || nums[mid-1]<x)){
            return nums[mid];
        }
        else if(nums[mid]>x){
            e=mid-1;
        }
        else{
            s=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int>nums={3, 4, 4, 7, 8, 10};
    int x=5;
    cout<<floor(nums,x)<<" "<<ceil(nums,x);
    return 0;
}