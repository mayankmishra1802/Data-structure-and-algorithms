#include<bits/stdc++.h>
using namespace std;
vector<int>nums={1,2,1};
int k=2;
vector<int>res;
bool printOnlyOneSubsequenceWithSumK(int i, vector<int>s,int sum){
    if(i>=nums.size()){
        if(sum==k){
            res=s;
            return true; //condition satisfied
        }
        else return false; //condition not staisfied
    }
    s.push_back(nums[i]);
    sum+=nums[i];
    if(printOnlyOneSubsequenceWithSumK(i+1,s,sum)==true){
        return true;
    }
    s.pop_back();
    sum-=nums[i];
    if(printOnlyOneSubsequenceWithSumK(i+1,s,sum)==true){
        return true;
    }
    return false;
}
int main()
{
    printOnlyOneSubsequenceWithSumK(0,{},0);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}