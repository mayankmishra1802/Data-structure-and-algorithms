#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    int sum=0,maxsum=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(sum<0){
            sum=0;
        }
        sum+=nums[i];
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum;
    return 0;
}