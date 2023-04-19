class Solution {
public:
bool isSafe(int row,int col,vector<string>&board,int n)
{
    if(col == 0) return true;
    int x=row;
    int y=col;
    while(y>=0){
        if(board[x][y]=='Q'){
            return false;
        }
        y--;
    }
    x=row;
    y=col;
    while(x>=0 && y>=0){
          if(board[x][y]=='Q'){
            return false;
        }
        y--;
        x--;

    }

    x=row;
    y=col;
    while(x<n && y>=0){
         if(board[x][y]=='Q'){
            return false;
        }
        y--;
        x++;
    }
    return true;
}
void helper(int col,vector<string> &board, vector<vector<string>> &ans,int n)
{
    // base case

    if(col == n){
        //if the last queen is placed then, count this in
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            helper(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
    return;
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>board(n,string(n,'.'));

        int col =0 ;
        helper(col,board,ans,n);
        return ans;
    }
};