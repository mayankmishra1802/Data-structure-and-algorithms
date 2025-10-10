#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    int n=nums.size();
    int r=0,l=0;
    int cnt=0;
    int z=k;
    while(r<n){
        if(nums[r]==1){
            cnt=max(cnt,r-l+1);
            r++;
        }
        else if(nums[r]==0 && z!=0){ 
            z--;
            cnt=max(cnt,r-l+1);
            r++;
        }
        else{
            z=k;
            l++;
            r=l;
        }
    }
    cout<<cnt;
    return 0;
}