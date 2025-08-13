#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&nums,int m,int mid){
    int pages_allocated=0;
    int students=1;
    for(int i=0;i<nums.size();i++){
        if(pages_allocated+nums[i]>mid){
            students++;
            pages_allocated=nums[i];
        }
        else{
            pages_allocated+=nums[i];
        }
    }
    if(students<=m){
        return true;
    }
    return false;
}
int bookAllocation(vector<int>&nums,int m){
    if(nums.size()<m){
        return -1;
    }
    int s=*max_element(nums.begin(),nums.end());
    int e=accumulate(nums.begin(),nums.end(),0);
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(nums,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={12,34,67,90}; //books with pages
    int m=2;//no of students
    cout<<bookAllocation(nums,m);
    return 0;
}