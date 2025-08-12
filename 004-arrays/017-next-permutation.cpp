#include <bits/stdc++.h>
using namespace std;
void rev(vector<int>&nums,int i,int j){
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}
void nextPermutation(vector<int> &nums){
    int n=nums.size();
    int breakpoint=-1;
    for (int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            breakpoint = i;
            break;
        }
    }
    if(breakpoint == -1){
        rev(nums, 0, n - 1);
    }
    else{
        for (int i = n - 1; i >= breakpoint; i--){
            if (nums[i] > nums[breakpoint]){
                swap(nums[i], nums[breakpoint]);
                break;
            }
        }
        rev(nums, breakpoint + 1, n - 1);
    }
}

int main(){
    vector<int>nums={1,2,3};
    nextPermutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}