class Solution {
    int solve(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n+1,0);

        // base case
       dp[0] = nums[0];

 for(int index=1;index<n;index++)
 {
     int take = nums[index];
 if(index > 1){
take += dp[index-2];
 } 
  int notTake =0+ dp[index-1];
    
    dp[index] = max(take,notTake); 
 }
  
  return dp[n-1];
    }
public:
    int rob(vector<int>& nums) {
        
        return solve(nums);
    }
};