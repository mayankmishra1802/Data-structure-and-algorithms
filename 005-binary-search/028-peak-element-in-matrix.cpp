#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
int idx_max_element(vector<vector<int>>&mat,int size,int mid){
    int idx=-1,m=-1;
    for(int i=0;i<size;i++){
        if(mat[i][mid]>m){
            m=mat[i][mid];
            idx=i;
        }
    }
    return idx;
}
void findPeakGrid(vector<vector<int>>& mat) {
    int s=0,e=mat[0].size()-1;
    while(s<=e){
        int mid=s+(e-s)/2; 
        int peak_idx=idx_max_element(mat,mat.size(),mid);
        int peak=mat[peak_idx][mid];
        int top=(peak_idx-1<0)?-1:mat[peak_idx-1][mid];
        int bottom=(peak_idx+1>=mat.size())?-1:mat[peak_idx+1][mid];
        int left=(mid-1<0)?-1:mat[peak_idx][mid-1];
        int right=(mid+1>=mat[0].size())?-1:mat[peak_idx][mid+1];
        if(peak<right){
            s=mid+1;
        }
        else if(peak<left){
            e=mid-1;
        }
        else{
            ans.push_back(peak_idx);
            ans.push_back(mid);
            break;
        }
    }
}
int main()
{
    vector<vector<int>>matrix={{1,4},{3,2}};
    findPeakGrid(matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}