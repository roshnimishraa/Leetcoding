class Solution {
    private:
    int lcs(int ind1, int ind2, string &s1, string &s2, vector<vector<int>> &dp)
    {
        if(ind1 <0 || ind2<0)
        {
            return 0;
        }
        if(dp[ind1][ind2] != -1){
            return dp[ind1][ind2];
        }
        // match
        if(s1[ind1] == s2[ind2])
        {
        return dp[ind1][ind2] = 1+lcs(ind1-1, ind2-1, s1,s2,dp);
        }

        // not match 
        return dp[ind1][ind2] = 0+ max(lcs(ind1,ind2-1,s1,s2,dp), lcs(ind1-1,ind2, s1, s2,dp));
    }
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m =word2.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
    int LCS = lcs(n-1, m-1, word1, word2,dp);
    int ans= n+m - 2*LCS;
    return ans;
    }
};