class Solution {
    int longestCommonSubsequence(string s,string t)
    {
int n = s.length();
int m = t.length();
vector<vector<int>> dp(n+1,vector<int>(m+1,0));
// base case
for(int j=0;j<m+1;j++)
{
    dp[0][j] = 0;
}
for(int i=0;i<n+1;i++)
{
    dp[i][0] = 0;
}
for(int i=1;i<n+1;i++)
{
    for(int j=1;j<m+1;j++)
    {
    if(s[i-1] == t[j-1])
dp[i][j] = 1 + dp[i-1][j-1];
  
    else
dp[i][j] = 0 + max(dp[i-1][j],dp[i][j-1]);
    
}
}
return dp[n][m];
}

    
public:
    int minDistance(string word1, string word2) {
int lcs=longestCommonSubsequence(word1,word2);
int n = word1.length();
int m = word2.length();
//int deletion = n - lcs;
//int insertion = m - lcs;
int ans = n + m - 2 * lcs;
return ans;    
    }
};