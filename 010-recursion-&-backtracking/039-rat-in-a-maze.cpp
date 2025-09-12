#include<bits/stdc++.h>
using namespace std;
vector<string> all_paths;
void path(vector<vector<int>>&maze,int n,int row,int col,string s){
    if(row==n-1 && col==n-1){
        //all_paths.push_back(s);
        cout<<s<<endl;
        return;
    }
    if(row<0 || col<0 || row>=n || col>=n || maze[row][col]==0){
        return;
    }
    maze[row][col]=0;
    path(maze,n,row-1,col,s+'U');
    path(maze,n,row+1,col,s+'D');
    path(maze,n,row,col+1,s+'R');
    path(maze,n,row,col-1,s+'L');
    maze[row][col]=1;

}
int main()
{
    int n=4;
    vector<vector<int>>maze={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    path(maze,n,0,0,"");
    return 0;
}