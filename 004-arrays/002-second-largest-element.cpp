#include<bits/stdc++.h>
using namespace std;
int secondLargestElement(vector<int>& nums) {
    int fl=INT_MIN,sl=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=fl){
            fl=nums[i];
        }
        else if(nums[i]>sl){
            sl=nums[i];
        }
    }
    if(sl==INT_MIN){
        sl=-1;
    }
    return sl;
}
int main(){
    vector<int>nums={8, 8, 7, 6, 5};
    cout<<secondLargestElement(nums);
    return 0;
}