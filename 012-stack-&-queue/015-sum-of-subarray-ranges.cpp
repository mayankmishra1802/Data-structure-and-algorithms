#include<bits/stdc++.h>
using namespace std;
long long sum_of_min(vector<int>&nums){
    int n=nums.size();
    stack<int>s;
    vector<int>nse(n);
    vector<int>pse(n);
    for(int i=0;i<n;i++){
        while(!s.empty() && nums[s.top()]>=nums[i]){ //when array has same values
            s.pop();
        }
        pse[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    while(!s.empty()){
        s.pop();
    }
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && nums[s.top()]>nums[i]){
            s.pop();
        }
        nse[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        long long val = (long long)nums[i];
        long long left = (long long)i - (long long)pse[i];
        long long right = (long long)nse[i] - (long long)i;
        sum+=(right*left*val);
    }
    return sum;
}
long long sum_of_max(vector<int>&nums){
    int n=nums.size();
    stack<int>s;
    vector<int>nge(n);
    vector<int>pge(n);
    for(int i=0;i<n;i++){
        while(!s.empty() && nums[s.top()]<=nums[i]){ 
            s.pop();
        }
        pge[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    while(!s.empty()){
        s.pop();
    }
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && nums[s.top()]<nums[i]){
            s.pop();
        }
        nge[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        long long val = (long long)nums[i];
        long long left = (long long)i - (long long)pge[i];
        long long right = (long long)nge[i] - (long long)i;
        sum+=(right*left*val);
    }
    return sum;
}
int main()
{
    vector<int>nums={1,2,3};
    cout<<sum_of_max(nums)-sum_of_min(nums);
    return 0;
}