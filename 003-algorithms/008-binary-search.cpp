#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>&nums,int target){
    int s=0,e=nums.size()-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={1,3,24,5,6};
    int target=5;
    cout<<BinarySearch(nums,target);
    return 0;
}