#include<bits/stdc++.h>
using namespace std;
// vector<vector<int>>s;
// void sub(vector<int>&nums,int i){
//     if(i==nums.size()){
//         return;
//     }
//     int curr_size = s.size();
//     for(int j=0;j<curr_size;j++){
//         vector<int>op=s[j];
//         op.push_back(nums[i]);
//         s.push_back(op);
//     }
//     sub(nums,i+1);
// }
// int main()
// {
//     vector<int>nums={1,2,3};
//     s.push_back({});
//     sub(nums,0);
//     for(int i=0;i<s.size();i++){
//         for(int j=0;j<s[i].size();j++){
//             cout<<s[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
vector<int>nums={3,1,2};
vector<vector<int>>res;
void sub(vector<int>s,int i){
    if(i>=nums.size()){
        res.push_back(s);
        return ;
    }
    s.push_back(nums[i]);
    sub(s,i+1);
    s.pop_back(); //backtracking 
    sub(s,i+1);
}
int main(){
    sub({},0);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}