#include<bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int>&nums,int k){
    int s=0,e=nums.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int no_of_missing_numbers=nums[mid]-(mid+1);
        if(no_of_missing_numbers<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return k+s;
}
int main()
{
    vector<int>nums={2,3,4,7,11};
    int k=5;
    cout<<findKthPositive(nums,k);
    return 0;
}