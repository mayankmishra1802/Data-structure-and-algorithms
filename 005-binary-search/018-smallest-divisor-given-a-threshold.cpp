#include<bits/stdc++.h>
using namespace std;
bool sum(vector<int>&nums,int t,int divisor){
    int s=0;
    for(int i=0;i<nums.size();i++){
        s+=ceil((double)(nums[i]) / (double)(divisor));
        if(s>t){
            return false;
        }
    }
    return true;
}
int smallestDivisor(vector<int>&nums,int t){
    int s=1,e=*max_element(nums.begin(),nums.end());
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(sum(nums,t,mid)){
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
    vector<int>nums={1,2,5,9};
    int threshold=5;
    cout<<smallestDivisor(nums,threshold);
    return 0;
}