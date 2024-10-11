class Solution {
    private:
    bool solve(int i, int j, int k, string &s1, string &s2, string &s3,  vector<vector<vector<int>>> &dp)
    {
            int n1=s1.length();
        int n2=s2.length();
        int n=s3.length();
        // base case
        if(i==n1 && j==n2 && k==n){
            return true;
        }
        if(k>=n){
            return false;
        }
        if(dp[i][j][k] != -1){
            return dp[i][j][k];
        }
        bool result = false;
    if(s1[i] == s3[k])
    {
        result= solve(i+1,j,k+1,s1,s2,s3,dp);
    }
    if(result == true){
        return dp[i][j][k]=result;
    }
    if(s2[j] == s3[k])
    {
     result = solve(i,j+1,k+1,s1,s2,s3,dp);
    }
return dp[i][j][k] = result;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.length();
        int n2=s2.length();
        int n=s3.length();
    vector<vector<vector<int>>> dp(n1+1,vector<vector<int>> (n2+1, vector<int> (n+1,-1)));
        return solve(0,0,0,s1,s2,s3,dp);
    }
};