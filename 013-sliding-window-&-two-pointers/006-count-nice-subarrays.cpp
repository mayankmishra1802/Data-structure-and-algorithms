#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&nums,int k){
    if(k<0) return 0;
    int l=0,r=0,cnt=0,sum=0;
    while(r<nums.size()){
        sum+=(nums[r]%2);
        while(sum>k){  
            sum-=(nums[l]%2);
            l++;
        }
        cnt=cnt+r-l+1;
        r++;
    }
    return cnt;
}
int main()
{
    vector<int>nums={2,2,2,1,2,2,1,2,2,2};
    int k=2;
    int a=find(nums,k);
    int b=find(nums,k-1);
    cout<<a-b;
    return 0;
}