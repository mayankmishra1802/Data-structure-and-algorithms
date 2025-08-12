#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int n=nums.size();
    int cnt=0,max_cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=1){
            cnt=0;
        }
        else{
            cnt++;
        }
        max_cnt=max(cnt,max_cnt);
    }
    return max_cnt;
}
int main()
{
    vector<int>nums={1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums);
    return 0;
}