#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&nums,int k,int mid){
    int no_of_arrays=1;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        if(sum+nums[i]>mid){
            no_of_arrays++;
            sum=nums[i];
        }
        else{
            sum+=nums[i];
        }
    }
    if(no_of_arrays<=k){
        return true;
    }
    return false;
}
int splitArray(vector<int>&nums,int k){
    int s=*max_element(nums.begin(),nums.end());
    int e=accumulate(nums.begin(),nums.end(),0);
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(nums,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={7,2,5,10,8};
    int k=2;
    cout<<splitArray(nums,k);
    return 0;
}