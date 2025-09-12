#include<bits/stdc++.h>
using namespace std;
vector<int>nums={2,3,6,7};
int target=7;
void sub(int i,int sum,vector<int>s){
    if (i>=nums.size() || sum>target){
        return;
    }
    if(sum==target){
        for(int j=0;j<s.size();j++){
            cout<<s[j]<<" ";
        }
        cout<<endl;
        return;
    }
    s.push_back(nums[i]);
    sum+=nums[i];
    sub(i,sum,s); //using same element multiple times
    s.pop_back();
    sum-=nums[i];
    sub(i+1,sum,s);
}
int main()
{
    sub(0,0,{});
    return 0;
}