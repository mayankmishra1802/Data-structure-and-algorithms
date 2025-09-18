#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums1={4,1,2};
    vector<int>nums2={1,3,4,2};
    vector<int>ans;
    stack<int>s;
    unordered_map<int,int>m;
    for (int i=nums2.size()-1;i>=0;i--) {
        while(!s.empty() && s.top()<=nums2[i]) {
            s.pop();
        }
        if(s.empty()){
            m[nums2[i]] = -1;
        } 
        else{
            m[nums2[i]] = s.top();
        }
        s.push(nums2[i]);
    }
    for (int i = 0; i < nums1.size(); i++) {
        ans.push_back(m[nums1[i]]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}