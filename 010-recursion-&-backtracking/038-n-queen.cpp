#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>ans;
bool ispossible(vector<string>&board,int n,int row,int col){
    for(int i=0;i<n;i++){  //rows
        if(board[i][col]=='Q'){
            return false;
        }
    }
    for(int i=0;i<n;i++){ //columns
        if(board[row][i]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>=0,j>=0;i--,j--){ //left diagnol
        if(board[i][j]=='Q'){
            return false;
        }
    }
    for(int i=row,j=col;i>0,j<n;i--,j++){ //right diagnol
        if(board[i][j]=='Q'){
            return false;
        }
    } 
    return true;
}
void nqueen(vector<string>&board,int n,int row){
    if(row>=n){
        //base case
        ans.push_back(board);
    }
    for(int j=0;j<n;j++){ //columns
        if(ispossible(board,n,row,j)){
            board[row][j]='Q';
            nqueen(board,n,row+1);
            board[row][j]='.';
        }
    }
}
int main()
{
    int n=4;
    vector<string>board(n,string(n,'.'));
    nqueen(board,n,0);
    return 0;
}