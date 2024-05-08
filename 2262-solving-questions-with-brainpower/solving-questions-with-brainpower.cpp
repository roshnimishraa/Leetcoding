class Solution {
    long long solve(int index,vector<vector<int>> &questions,vector<long long> &dp)
    {
        if(index >= questions.size()) return 0;
    if(dp[index]!=-1) return dp[index];
long long notTake = solve(index+1,questions,dp);
long long take = questions[index][0]+solve(index+questions[index][1]+1,questions,dp);
return dp[index] = max(take,notTake);
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n+1,-1);
        return solve(0,questions,dp);
    }
};