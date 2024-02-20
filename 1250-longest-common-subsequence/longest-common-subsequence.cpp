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
vector<vector<int>> dp(n,vector<int>(m,-1));
return helper(n-1,m-1,s,t,dp); 
    }
};

