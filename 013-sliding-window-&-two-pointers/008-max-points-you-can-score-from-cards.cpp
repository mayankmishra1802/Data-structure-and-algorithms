#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={9,7,7,9,7,7,9};
    int k=7;
    int n=nums.size();
    int l=0,r=n-k;
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=nums[i];
    }
    int min_sum=0;
    for(int i=0;i<r;i++){
        min_sum+=nums[i];
    }
    int sum=min_sum;
    while(r<n){
        sum=sum+nums[r]-nums[l];
        min_sum=min(min_sum,sum);
        r++;l++;
    }
    cout<<total_sum-min_sum;
    return 0;
}
