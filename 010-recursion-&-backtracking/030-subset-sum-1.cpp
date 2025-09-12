#include<bits/stdc++.h>
using namespace std;
vector<int>res;
void sub(int i,int sum,vector<int>&nums){
    if(i>=nums.size()){
        res.push_back(sum);
        return;
    }
    sum+=nums[i];
    sub(i+1,sum,nums);
    sum-=nums[i];
    sub(i+1,sum,nums);
}
int main()
{
    vector<int>nums={5,2,1};
    sub(0,0,nums);
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}