class Solution {
    private:
    int solve(int i, int j, string &word1, string &word2,
    vector<vector<int>> &dp)
    {
        // base case
        if(i<0) {
            return j+1; //no. of insert operations
        }
        if(j<0){
            return i+1; //no. of delete operations
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        // match
        if(word1[i] == word2[j])
        {
            return dp[i][j] = 0+solve(i-1,j-1,word1,word2,dp);
        }
        // not match
int insert = 1 + solve(i, j-1,word1,word2,dp);
int deletion = 1 + solve(i-1,j,word1,word2,dp);
int replace = 1 + solve(i-1,j-1,word1,word2,dp);
return dp[i][j] = min(insert,min(deletion,replace));
    }
public:
    int minDistance(string word1, string word2) {
 int n = word1.size();
 int m = word2.size();
vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,word1,word2,dp);
    }
};