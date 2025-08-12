#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int i=0,j=1;
    while(j<nums.size()){
        if(nums[i]==nums[j]){
            j++;
        }
        else{
            i++;
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return i+1;
}
int main()
{
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);
    return 0;
}