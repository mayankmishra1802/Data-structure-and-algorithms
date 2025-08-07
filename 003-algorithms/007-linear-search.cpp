#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>&nums,int target){
    for(int i=0;i<nums.size();i++){
        if(target==nums[i]){
            return i; 
        }
    }
    return -1; //not found
}
int main(){
    vector<int>nums={1,3,24,5,6};
    int target=5;
    cout<<linearSearch(nums,target);
    return 0;
}