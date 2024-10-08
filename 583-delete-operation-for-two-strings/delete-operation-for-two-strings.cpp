class Solution {
    private:
    int lcs(string &s1, string &s2)
    {
         int n = s1.size();
        int m =s2.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1,0));

   for(int j=0; j<=m; j++)
   {
    dp[0][j] = 0;
   }
   for(int i=0; i<=n; i++)
   {
    dp[i][0] = 0;
   }
   for(int ind1=1;ind1<=n; ind1++)
   {
    for(int ind2=1; ind2<=m; ind2++)
    {
             // match
        if(s1[ind1-1] == s2[ind2-1])
        {
         dp[ind1][ind2] = 1+dp[ind1-1][ind2-1];
        }

       else
         dp[ind1][ind2] = 0+ max(dp[ind1-1][ind2], dp[ind1][ind2-1]);
    }
   }
  return dp[n][m];
    }
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
    int k = lcs(word1, word2);
    
 
    return (n+m)-2*k;
    }
};