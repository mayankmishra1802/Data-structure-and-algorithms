#include<bits/stdc++.h>
using namespace std;
bool word_search(vector<vector<char>>&board,string word,int m,int n,int i,int j,int index){
    if(index==word.size()){
        return true;
    }
    if( i<0 || j<0 || i>=m || j>=n || board[i][j]!=word[index]||board[i][j]=='$'){
        return false;
    }
    char temp=board[i][j];
    board[i][j]='$'; //visited
    bool found=word_search(board, word, m, n, i - 1, j, index + 1) ||
               word_search(board, word, m, n, i + 1, j, index + 1) ||
               word_search(board, word, m, n, i, j - 1, index + 1) ||
               word_search(board, word, m, n, i, j + 1, index + 1);
    board[i][j]=temp; //backtrack
    return found;
}
int main()
{
    vector<vector<char>>board= {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word="ABCCED";
    int m=board.size();
    int n=board[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==word[0] && word_search(board,word,m,n,i,j,0)){
                cout<<"true";
            }
        }
    }
    return 0;
}