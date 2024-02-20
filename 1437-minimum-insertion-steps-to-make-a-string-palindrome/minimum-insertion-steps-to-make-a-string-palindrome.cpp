class Solution {
public:
int longestPalindromicSubsequence(string s)
{
    int n = s.length();
string t = s;
reverse(t.begin(),t.end());
vector<vector<int>> dp(n+1,vector<int>(n+1,0));
// base case 
for(int i=0;i<n+1;i++)
{
dp[i][0] = 0;
}
for(int j=0;j<n+1;j++)
{
dp[0][j] = 0;
}

for(int i=1;i<n+1;i++)
{
for(int j=1;j<n+1;j++)
{
if(s[i-1] == t[j-1])
{
dp[i][j] = 1 + dp[i-1][j-1];
}
else{
    dp[i][j] = 0+max(dp[i-1][j] , dp[i][j-1]);
}
}
}
return dp[n][n];
}
    int minInsertions(string s) {
  int lps = longestPalindromicSubsequence(s);
int ans = s.length() - lps;
return ans;      
    }
};