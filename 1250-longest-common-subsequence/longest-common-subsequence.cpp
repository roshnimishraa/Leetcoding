class Solution {
int helper(int ind1,int ind2,string &s1,string &s2,
vector<vector<int>> &dp)
{
if(ind1<0 || ind2<0) return 0;

if(dp[ind1][ind2]!=-1) 
return dp[ind1][ind2];
// matching 
if(s1[ind1] == s2[ind2]) 
 return dp[ind1][ind2]=1+helper(ind1-1,ind2-1,s1,s2,dp);

// not matching 
else 
return dp[ind1][ind2]=0+max(helper(ind1-1,ind2,s1,s2,dp),helper(ind1,ind2-1,s1,s2,dp));

}
public:
    int longestCommonSubsequence(string s, string t) {
       int n = s.size();
       int m = t.size();
vector<vector<int>> dp(n+1,vector<int>(m+1,0));
// base case
// shifting index by 1
for(int i=0;i<n+1;i++)
{
 dp[i][0] = 0;
}
for(int j=0;j<m+1;j++)
{
    dp[0][j] = 0;
}
for(int i=1;i<n+1;i++)
{
    for(int j=1;j<m+1;j++)
    {
 // matching 
if(s[i-1] == t[j-1]) 
dp[i][j] = 1 + dp[i-1][j-1];

// not matching 
else 
 dp[i][j] = 0 + max(dp[i-1][j], dp[i][j-1]);
    }
}
return dp[n][m];
    }
};

