#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>ps(n,0);
    ps[0]=nums[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+nums[i];
    }
    int cnt=0;
    int i,j=n-1;
    for(int i=0;i<n;i++){
        if(ps[i]==k){
           cnt++;
        }
    }
    while(j>=0){
        i=0;
        while(i<j){
            if(ps[j]-ps[i]==k){
                cnt++;
            }
            i++;
        }
        j--;
    }
    return cnt;
}
int main()
{
    vector<int>nums={1,1,1};
    int k=2;
    cout<<subarraySum(nums,k);
    return 0;
}