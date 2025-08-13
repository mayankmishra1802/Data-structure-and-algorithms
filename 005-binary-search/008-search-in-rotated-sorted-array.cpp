#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&nums,int x){
    int s=0,e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==x){
            return mid;
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
    return -1;
}
int main()
{
    vector<int>nums={4,5,6,7,0,1,2};
    int x=2;
    cout<<search(nums,x);
    return 0;
}