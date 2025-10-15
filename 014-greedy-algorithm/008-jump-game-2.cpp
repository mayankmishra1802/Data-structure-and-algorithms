#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={2,3,1,1,4};
    int n=nums.size();
    int jumps=0;
    int current=0; //range where the current jumpcan take us
    int max_idx_reachable=0; //max index we can reach
    for(int i=0;i<n-1;i++){
        max_idx_reachable=max(max_idx_reachable,i+nums[i]);
        if(i==current){
            jumps++;
            current=max_idx_reachable;
        }
    }
    cout<<jumps;
    return 0;
}