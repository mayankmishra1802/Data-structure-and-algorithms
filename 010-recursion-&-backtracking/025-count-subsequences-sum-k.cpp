#include<bits/stdc++.h>
using namespace std;
vector<int>nums={1,2,1};
int k=2;
// int cnt=0; //avoid global variable use
// void countAllSubsequencesWithSumK(int i, vector<int>s,int sum){
//     if(i>=nums.size()){
//         if(sum==k){
//             cnt++;
//         }
//         return;
//     }
//     s.push_back(nums[i]);
//     sum+=nums[i];
//     countAllSubsequencesWithSumK(i+1,s,sum);
//     s.pop_back();
//     sum-=nums[i];
//     countAllSubsequencesWithSumK(i+1,s,sum);
// }
int countSub(int i,int sum){
    if(i==nums.size()){
        if(sum==k) return 1;
        else return 0;
    }
    sum+=nums[i];
    int l=countSub(i+1,sum);
    sum-=nums[i];
    int r=countSub(i+1,sum);
    return l+r;
}
int main()
{
    // countAllSubsequencesWithSumK(0,{},0);
    // cout<<cnt;
    cout<<countSub(0,0);
    return 0;
}