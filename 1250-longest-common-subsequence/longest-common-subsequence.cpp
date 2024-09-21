class Solution {
 private:
int solve(string text1, string text2)
{
    int n =text1.size();
    int m = text2.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));

// base case -> i<0 || j<0 but in tabulation dp[-1] is unreachable
// Therefore do shifting of index in order to write tabulation 
// now the base case acc. to tab. if(i==0 || j==0) 
 for(int i=0;i<=n;i++)
 {
   dp[i][0] = 0;
 }
 for(int i=0;i<=m;i++)
 {
    dp[0][i] = 0;
 }
 for(int index1=1;index1<=n;index1++)
 {
    for(int index2=1;index2<=m;index2++)
    {
        // matching 
        if(text1[index1-1] == text2[index2-1])
    dp[index1][index2] = 1+dp[index1-1][index2-1];
    // not matching 
    else
    dp[index1][index2] = 0 + max(dp[index1-1][index2], dp[index1][index2-1]);
    }
 }
 return dp[n][m];
}
public:
    int longestCommonSubsequence(string text1, string text2) {
       return solve(text1, text2);
  }
};