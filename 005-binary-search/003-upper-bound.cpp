#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &nums, int x){
    int s=0,e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]>x && (mid==0 || nums[mid-1]<=x)){
            return mid;
        }
        else if(nums[mid]<=x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return nums.size();//not found
}
int main()
{
    vector<int>nums={1,2,2,3};
    int x=2;
    cout<<upperBound(nums,x);
    return 0;
}