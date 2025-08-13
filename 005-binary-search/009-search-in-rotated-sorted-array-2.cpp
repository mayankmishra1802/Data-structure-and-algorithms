#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>&nums,int x){
    int s=0,e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==x){
            return true;
        }
        if(nums[s]==nums[mid] && nums[mid]==nums[e]){
            s++;
            e--;
            continue;
        }
        if(nums[mid]>=nums[s]){
            if(x>=nums[s] && x<nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(x>nums[mid] && x<=nums[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return false;
}
int main()
{
    vector<int>nums={2,5,6,0,0,1,2};
    int x=0;
    cout<<search(nums,x);
    return 0;
}