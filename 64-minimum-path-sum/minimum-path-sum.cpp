class Solution {
    int solve(int i,int j,vector<vector<int>> &grid,
    vector<vector<int>> &dp)
    {
        // base case
    if(i<0 || j<0)
    {
    return 1e9;
    }
    if(i==0 && j==0)
    {
       return grid[0][0];
    }
if(dp[i][j]!=-1)
{
    return dp[i][j];
}
    int down = grid[i][j]+solve(i-1,j,grid,dp);
    int right =grid[i][j]+solve(i,j-1,grid,dp);
    return dp[i][j]=min(down,right);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
    vector<vector<int>> dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,grid,dp);
    }
};