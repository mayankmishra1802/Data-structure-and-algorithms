#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={10,2,-5};
    stack<int> s;
    for (int i=0;i<nums.size();i++){
        bool collsion=false;
        while(!s.empty() && s.top()>0 && nums[i]<0){
            if(abs(s.top()) < abs(nums[i])){
                s.pop();      
                continue;
            } 
            else if(abs(s.top()) == abs(nums[i])){
                s.pop();           
            }
            collsion = true;       
            break;
        }
        if(!collsion){
            s.push(nums[i]);
        }
    }
    vector<int>ans(s.size());
    for(int i=s.size()-1;i>=0;i--){
        ans[i]=s.top();
        s.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}