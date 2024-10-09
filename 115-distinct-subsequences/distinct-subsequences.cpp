class Solution {
    private:
    int helper(int ind1, int ind2, string &s, string &t,vector<vector<int>> &dp)
    {
        if(ind1 < 0 && ind2 < 0){
            return 1;
        }
        if(ind1<0){
            return 0; // all the char in t doesn't match
        }
        if(ind2<0){
            return 1;
        }
    if(dp[ind1][ind2] != -1){
        return dp[ind1][ind2];
    }
        // match
        if(s[ind1] == t[ind2])
        {
            // take + notTake that index look for another
        return dp[ind1][ind2] = helper(ind1-1,ind2-1, s,t,dp)+helper(ind1-1,ind2,s,t,dp);
        }
  
return dp[ind1][ind2] = helper(ind1-1,ind2,s,t,dp);
  
    }
public:
    int numDistinct(string s, string t) {
        int n = s.length();
        int m = t.length();
    vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(n-1,m-1,s,t,dp);
    }
};