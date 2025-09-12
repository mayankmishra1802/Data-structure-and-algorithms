#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>&nums,int i){
    if(nums[i]>nums[i+1]){
        return false;
    }
    if(i+1==nums.size()){
        return true;
    }
    return sorted(nums,++i);
}
int main()
{
    vector<int>nums={1,4,8,9,10};
    cout<<sorted(nums,0);
    return 0;
}