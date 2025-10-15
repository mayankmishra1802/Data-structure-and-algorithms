#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={3,2,1,0,4};
    int n=nums.size();
    int reachable = 0;
    bool flag=false;
    for(int i = 0; i < n; i++) {
        if(i > reachable) { 
            break;
        }
        reachable = max(reachable, i + nums[i]);
        if(reachable >= n - 1){
            flag=true;
            break;
        } 
    }
    if(flag){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}