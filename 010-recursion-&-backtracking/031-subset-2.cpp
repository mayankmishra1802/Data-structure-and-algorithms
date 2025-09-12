#include<bits/stdc++.h>
using namespace std;
void sub(int i,vector<int>s,vector<int>&nums){
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    for(int j=i;j<nums.size();j++){
        if(i!=j && nums[j]==nums[j-1]){
            continue;
        }
        s.push_back(nums[j]); // choose option
        sub(j+1,s,nums); //explore options 
        s.pop_back(); //backtrack
    }
}
int main()
{
    vector<int>nums={1,2,2};
    sort(nums.begin(),nums.end());
    sub(0,{},nums);
    return 0;
}