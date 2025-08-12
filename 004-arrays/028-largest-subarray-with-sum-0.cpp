#include<bits/stdc++.h>
using namespace std;
int maxLen(vector<int>& nums) {
    map<int,int>m;
    int sum=0,length=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==0){
            length=i+1;
        }
        else{
            if(m.find(sum)!=m.end()){
                length=max(i-m[sum],length);
            }
            else{
                m[sum]=i;
            }
        }
    }
    return length;
    }
int main()
{
    vector<int>nums={15, -2, 2, -8, 1, 7, 10, 23};
    cout<<maxLen(nums);
    return 0;
}