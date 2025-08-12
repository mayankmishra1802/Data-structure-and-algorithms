#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int i=0;
    while(i<n){
        if(nums[i]!=i){
            return i;
        }
        i++;
    }
    return n;
}
int main()
{
    vector<int>nums={9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(nums);
    return 0;
}