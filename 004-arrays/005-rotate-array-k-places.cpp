#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n;
    for(int i=nums.size()-k,j=nums.size()-1;i<j;i++,j--){
        swap(nums[i],nums[j]);
    }
    for(int i=0,j=nums.size()-k-1;i<j;i++,j--){
        swap(nums[i],nums[j]);
    }
    for(int i=0,j=nums.size()-1;i<j;i++,j--){
        swap(nums[i],nums[j]);
    }
}
int main(){
    vector<int>nums={1,2,3,4,5,6,7};
    int k=3;
    rotate(nums,k);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}