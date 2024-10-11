class Solution {
    int solve(int index,vector<int> &nums, vector<int> &dp)
    {
        // base case
   if(index<0){
    return 0;
   }
   if(dp[index] != -1){
    return dp[index];
   }
        // not take
    int notTake = solve(index-1, nums,dp);
    int take=0;
 take = nums[index] + solve(index-2,nums,dp);
   
    return dp[index] = max(take,notTake);
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return solve(n-1,nums,dp);
    }
};