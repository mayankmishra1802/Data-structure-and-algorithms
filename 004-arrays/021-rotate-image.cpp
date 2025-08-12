#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size()-1;i++){
        for(int j=i+1;j<matrix[i].size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<matrix.size();i++){
        for(int k=0,j=matrix[i].size()-1;k<j;k++,j--){
            swap(matrix[i][k],matrix[i][j]);
        }
    }
}
int main()
{
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}