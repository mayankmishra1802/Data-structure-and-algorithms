#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans(n,0);
    int i=0,j=1;
    for(int k=0;k<n;k++){
        if(nums[k]>0 ){
            ans[i]=nums[k];
            i=i+2;
        }
        else{
            ans[j]=nums[k];
            j=j+2;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={3,1,-2,-5,2,-4};
    vector<int>v=rearrangeArray(nums);
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    return 0;
}