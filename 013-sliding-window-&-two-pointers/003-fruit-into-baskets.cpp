#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={1, 2, 3, 2, 2};
    unordered_map<int,int>m;
    int n=nums.size();
    int r=0,l=0;
    int maxlength=0;
    while(r<n){
        m[nums[r]]++;
        if(m.size()>2){
            while(m.size()>2){ 
                m[nums[l]]--;
                if(m[nums[l]]==0){
                    m.erase(nums[l]);
                }
                l++;
            }
        }
        else{
            maxlength=max(maxlength,r-l+1);
        }
        r++;
    }
    cout<<maxlength;
    return 0;
}