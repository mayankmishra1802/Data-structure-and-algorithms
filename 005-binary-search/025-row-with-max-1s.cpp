#include<bits/stdc++.h>
using namespace std;
int first_occurence(vector<int>nums){
    int s=0,e=nums.size()-1;
    int ans=nums.size();
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==1){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>>matrix={{1,1,1},{0,0,1},{0,0,0}};
    int max_cnt=0;
    int row=-1;
    for(int i=0;i<matrix.size();i++){
        int cnt= matrix[i].size()-first_occurence(matrix[i]);
        if(max_cnt<cnt){
            max_cnt=cnt;
            row=i;
        }
    }
    cout<<row;
    return 0;
}