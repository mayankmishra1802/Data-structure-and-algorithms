#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int i=0,j=i+1;
    while(j<nums.size()){
        if(nums[i]!=0){
           j++;i++;
        }
        else{
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;j++;
            }
            else{
               j++;
            }
        }
    }
}
int main()
{
    vector<int>nums={0,1,0,3,12};
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}