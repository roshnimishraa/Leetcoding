 class Solution {
public:
    
    bool isSafe(int row,int col, vector<string> board, int n){
        
        int duprow = row;
        int dupcol = col;
        
        // let's check if there's any queen or not on the upper diagonal 
        
        while(row>=0 && col >= 0){
            
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
            row--;
        }
        
        row = duprow;
        col = dupcol;
        
        // let's check if there's any queen or not on the right side
        
        while(col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        
        row = duprow;
        col = dupcol;
        
        // let's check if there's any queen or not on the lower diagonal 
        
        while(row<n && col>=0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    
    // this function checks where we can put the queen without any fight
    
    void solve(int col,vector<string> &board, vector<vector<string>> &ans, int n){
        
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row = 0;row<n;row++){
            
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(col+1,board,ans,n);
                board[row][col] = '.';
            }
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> res;
        vector<string> board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        
        solve(0,board,res,n);
        return res;
    }
};