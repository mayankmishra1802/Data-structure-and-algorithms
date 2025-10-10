#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&nums,int goal){
    if(goal<0) return 0;
    int l=0,r=0,cnt=0,sum=0;
    while(r<nums.size()){
        sum+=nums[r];
        while(sum>goal){
            sum-=nums[l];
            l++;
        }
        cnt=cnt+r-l+1;
        r++;
    }
    return cnt;
}
int main()
{
    vector<int>nums={0,0,0,0,0};
    int goal=0;
    int a=find(nums,goal);
    int b=find(nums,goal-1);
    cout<<a-b;
    return 0;
}