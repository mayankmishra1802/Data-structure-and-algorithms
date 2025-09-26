#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={3,1,2,4};
    int n=nums.size();
    stack<int>s;
    vector<int>nse(n);
    vector<int>pse(n);
    int mod=1e7+9;
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
        int right=nse[i]-i;
        int left=i-pse[i];
        sum+=(((right*left%mod)*nums[i]%mod)%mod);
    }
    cout<<sum;
    return 0;
}