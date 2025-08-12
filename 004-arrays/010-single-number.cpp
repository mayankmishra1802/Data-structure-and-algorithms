#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    int n=nums.size();
    int temp=nums[0];
    for(int i=1;i<n;i++){
        temp=temp^nums[i];
    }
    return temp;
}
int main()
{
    vector<int>nums={4,1,2,1,2};
    cout<<singleNumber(nums);
    return 0;
}