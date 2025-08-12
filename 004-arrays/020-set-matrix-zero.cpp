#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
    int rows=matrix.size();
    int cols=matrix[0].size();
    int r[rows*cols];int c[rows*cols];
    int l=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==0){
                r[l]=i;
                c[l]=j;
                l++;
            }
        } 
    }
    for(int i=l-1;i>=0;i--){
        for(int j=0;j<cols;j++){
            matrix[r[i]][j]=0;
        }
    }
    for(int i=l-1;i>=0;i--){
        for(int j=0;j<rows;j++){
            matrix[j][c[i]]=0;
        }
    }
}
int main()
{
    vector<vector<int>>matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}