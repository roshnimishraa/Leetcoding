class Solution {
public:
int helper(vector<vector<int>> &grid,int i,int j,vector<vector<int>> &dp)
{
        int m = grid.size();
    int n = grid[0].size();
//robot can move to 0 cell and 1 is obstacle
if(i<0 || i>= m || j<0 || j>=n || grid[i][j]==1)
{
return 0;
}
if(dp[i][j] != -1) return dp[i][j];
if(i == m-1 && j==n-1) {
    return 1;
}
int left = helper(grid,i,j+1,dp);
int down = helper(grid,i+1,j,dp); 
return dp[i][j] = left+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& grid) 
    {
    int m = grid.size();
    int n = grid[0].size();
vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
return helper(grid,0,0,dp);
    }
};