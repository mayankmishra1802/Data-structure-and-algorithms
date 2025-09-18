#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={1,2,1};
    int n=nums.size();
    vector<int>ans(n);
    stack<int>s;
    for (int i=2*n-1;i>0;i--) {
        int idx=i%n;
        while(!s.empty() && nums[s.top()]<=nums[idx]){
            s.pop();
        }
        if(!s.empty()){
            ans[idx]=nums[s.top()];
        }
        else{
            ans[idx]=-1;
        }
        s.push(idx);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}