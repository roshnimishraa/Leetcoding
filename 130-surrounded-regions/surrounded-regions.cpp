class Solution {
    private:
    void floodFill(int i,int j,char prev,char change,vector<vector<char>> &board)
    {
        int n=board.size();
        int m = board[0].size();
        if(i<0 || j<0 || i>=n || j>=m) return;
if(board[i][j]!=prev)
{
    return;
}
board[i][j]=change;
floodFill(i+1,j,prev,change,board);
floodFill(i-1,j,prev,change,board);
floodFill(i,j-1,prev,change,board);
floodFill(i,j+1,prev,change,board);

    }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            // convert all 'O' to '_'
            if(board[i][j]=='O')
            {
                board[i][j]='_';
            }
        }
    }
    // apply flood fill algorithm 
// replace all boundary '_' to 'O' 
// first row 
for(int j=0;j<m;j++)
{
    if(board[0][j]=='_')
    {
 floodFill(0,j,'_','O',board);
    }
}
// last row 
for(int j=0;j<m;j++)
{
    if(board[n-1][j] == '_')
    {
        floodFill(n-1,j,'_','O',board);
    }
}
// first col
for(int i=0;i<n;i++)
{
    if(board[i][0]=='_')
    {
        floodFill(i,0,'_','O',board);
    }
}
// last col
for(int i=0;i<n;i++)
{
    if(board[i][m-1]=='_')
    {
        floodFill(i,m-1,'_','O',board);
    }
}
// convert all remaining '_' to 'X'
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(board[i][j] == '_')
        {
            board[i][j]='X';
        }
    }
}
    }
};