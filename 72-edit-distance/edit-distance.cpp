class Solution {
    private:
    int solve(string &word1, string &word2)
    {
         int n = word1.size();
 int m = word2.size();
vector<vector<int>> dp(n+1,vector<int>(m+1,0));
// base case i==0 || j==0
for(int i=0; i<=n;i++)
{
dp[i][0] = i;
}
for(int j=0;j<=m;j++)
{
dp[0][j] = j;
}
     
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
 // match
        if(word1[i-1] == word2[j-1])
        {
             dp[i][j] = 0+ dp[i-1][j-1];
        }
        else {
        // not match
int insert = 1 + dp[i][j-1];
int deletion = 1 + dp[i-1][j];
int replace = 1 + dp[i-1][j-1];
 dp[i][j] = min(insert,min(deletion,replace));
        }
        }
    }
       return dp[n][m];
    }
public:
    int minDistance(string word1, string word2) {

      return solve(word1,word2);
    }
};