#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&nums,int n,int k,int mid){
    int no_of_cows=1;
    int previous_cow_position=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]-previous_cow_position>=mid){
            no_of_cows++;
            previous_cow_position=nums[i];
        }
    }
    if(no_of_cows>=k){
        return true;
    }
    return false;
}
int distance(vector<int>&nums,int n,int k){
    int s=1;
    int e=*max_element(nums.begin(),nums.end())-*min_element(nums.begin(),nums.end());
    int ans=-1; //dummy value
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(nums,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={0,3,4,7,10,9}; //position of stalls
    int n=nums.size();
    int k=4; //no of cows
    sort(nums.begin(),nums.end());
    cout<<distance(nums,n,k);
    return 0;
}