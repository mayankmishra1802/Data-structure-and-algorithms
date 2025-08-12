#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int>& nums) {
    int l=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>l){
            l=nums[i];
        }
    }
    return l;
}
int main(){
    vector<int>nums={3, 3, 6, 1};
    cout<<largestElement(nums);
    return 0;
}