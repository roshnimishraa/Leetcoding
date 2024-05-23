class Solution {
    int solve(vector<vector<char>> &matrix,int i,int j,int &maxi,vector<vector<int>> &dp)
    {
        int n = matrix.size();
        int m = matrix[0].size();
    if(i>=n || j>=m) {
        return 0;
    }
if(dp[i][j]!=-1)
{
    return dp[i][j];
}
    int right = solve(matrix,i,j+1,maxi,dp);
    int diagonal = solve(matrix,i+1,j+1,maxi,dp);
    int down = solve(matrix,i+1,j,maxi,dp);
    
    if(matrix[i][j]=='1')
    {
      dp[i][j] =1+min(right, min(diagonal,down));
maxi = max(maxi,dp[i][j]);
return dp[i][j];
    }
    else{
        return dp[i][j] = 0;
    }
    }
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
            int maxi=0;
vector<vector<int>> dp(n,vector<int>(m,-1));
           solve(matrix,0,0,maxi,dp);
         return maxi*maxi;
    }
};