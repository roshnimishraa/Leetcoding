class Solution {
    private:
  bool solve(int i,int j,string &s, string &p,vector<vector<int>> &dp)
  {
    if(i < 0 && j<0) return true;
    if (i < 0 && j >= 0)
        return false;
    if(i>=0 && j<0) 
    {
        for(int k=0; k<=i; k++)
        {
            if(p[k] != '*'){
            return false;
            }
        }
        return true;
    }
if(dp[i][j] != -1){
    return dp[i][j];
}
    // match
    if(p[i] == s[j] || p[i] == '?')
    {
        return dp[i][j] = solve(i-1, j-1, s, p,dp);
    }
    else if(p[i] == '*')
    {
        // empty || matches 
return dp[i][j]= solve(i-1,j,s,p,dp) || solve(i,j-1,s,p,dp);
    }
    return dp[i][j] = false;
  }
public:
    bool isMatch(string s, string p) {
        int n = p.length();
        int m = s.length();
    vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        return solve(n-1,m-1,s,p,dp);
    }
};