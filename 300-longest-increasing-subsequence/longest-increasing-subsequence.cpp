class Solution {
    int solve(int index,int prev_index, vector<int> &nums,
    vector<vector<int>> &dp)
    {
        // base case
        if(index == nums.size())
        {
            return 0;
        }
    if(dp[index][prev_index+1] != -1)
    {
        return dp[index][prev_index+1];
    }
 int notTake = solve(index+1, prev_index,nums,dp);
 int take=0;
 if(prev_index == -1 || nums[index] > nums[prev_index]){
    take = 1 + solve(index+1,index,nums,dp);
 }
 return dp[index][prev_index+1] = max(take,notTake);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
     vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        return solve(0,-1,nums,dp);
    }
};