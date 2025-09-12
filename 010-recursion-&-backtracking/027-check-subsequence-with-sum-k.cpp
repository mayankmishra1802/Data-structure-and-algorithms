#include<bits/stdc++.h>
using namespace std;
vector<int>nums={1,2,1};
int k=2;
bool SubsequenceWithSumK(int i, vector<int>s,int sum){
    if(i>=nums.size()){
        if(sum==k){
            return true; //yes ,subsequence exist
        }
        else return false; //does not exist
    }
    s.push_back(nums[i]);
    sum+=nums[i];
    if(SubsequenceWithSumK(i+1,s,sum)==true){
        return true;
    }
    s.pop_back();
    sum-=nums[i];
    if(SubsequenceWithSumK(i+1,s,sum)==true){
        return true;
    }
    return false;
}
int main()
{   
    cout<<SubsequenceWithSumK(0,{},0);
    return 0;
}