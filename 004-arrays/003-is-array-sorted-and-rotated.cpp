#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums) {
    int cnt=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]>nums[i]){
            cnt++;
        }
    }
    if(nums[0]<nums[nums.size()-1]){
        cnt++;
    }
    if(cnt<=1){
        return true;
    }
    return false;
}
int main()
{
    vector<int>nums={3,4,5,1,2};
    cout<<check(nums);
    return 0;
}