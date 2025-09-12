#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<vector<char>>&board,char number,int col,int row){
    for(int i = 0; i < 9; i++) {
        if(board[row][i] == number){ //row
            return false;
        } 
        if(board[i][col] == number){ //column
            return false; 
        }
    }
    int sr=(row/3)*3;
    int sc=(col/3)*3;
    for(int i=sr;i<=sr+2;i++){  //3X3 box
        for(int j=sc;j<=sc+2;j++){
            if(board[i][j]==number){
                return false;
            }
        }
    }
    return true;
}
bool solver(vector<vector<char>>&board,int row,int col){ //bool type to stop if solution found
    if (row == 9){
        return true;
    }
    int nextRow=row;
    int nextCol=col+1;
    if(nextCol==9){
        nextRow=row+1;
        nextCol=0;
    }
    if (board[row][col] != '.') {  
        return solver(board,nextRow,nextCol);
    }

    for(char k='1';k<='9';k++){
        if(isPossible(board,k,col,row)){
            board[row][col]=k;
            if(solver(board,nextRow,nextCol)){
                return true;
            }
            board[row][col]='.';
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    solver(board,0,0);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}