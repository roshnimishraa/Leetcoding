class Solution {
    int solve(vector<vector<char>> &matrix,int &maxi,vector<vector<int>> &dp)
    {
        int n = matrix.size();
        int m = matrix[0].size();
  for(int i=n-1;i>=0;i--)
   {
  for(int j=m-1;j>=0;j--)
    {
    int right = dp[i][j+1];
    int diagonal = dp[i+1][j+1];
    int down = dp[i+1][j];

  if(matrix[i][j]=='1')
    {
     int ans =1+min(right, min(diagonal,down));
      maxi = max(maxi,ans);
      dp[i][j]=ans;
    }
    else{
    dp[i][j] = 0;
    }
    }
    }
      return dp[0][0];
    }
   public:
    int maximalSquare(vector<vector<char>>& matrix) {
       int maxi=0;
        int n = matrix.size();
        int m = matrix[0].size();
vector<vector<int>> dp(n+1,vector<int>(m+1,0));
       solve(matrix,maxi,dp);
       return maxi*maxi;
    }
};