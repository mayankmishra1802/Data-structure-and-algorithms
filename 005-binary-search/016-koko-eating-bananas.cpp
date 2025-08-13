#include<bits/stdc++.h>
using namespace std;
bool checkSpeed(int mid,vector<int>nums,int h){
    int totalhours=0;
    for(int i=0;i<nums.size();i++){
        int x=nums[i];
        totalhours+=(x/mid);
        if((x%mid)!=0){
            totalhours++;
        }
        if(totalhours>h){
            return false;
        }
    }
    return true;
}
int minSpeed(vector<int>&piles,int h){
    int s=1;
    int e=*max_element(piles.begin(),piles.end());
    int ans=INT_MAX;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(checkSpeed(mid,piles,h)){
            ans=min(ans,mid);
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
    vector<int>nums={3,6,7,11};
    int h=8;
    cout<<minSpeed(nums,h);
    return 0;
}