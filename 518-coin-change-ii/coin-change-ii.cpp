class Solution {
    private:
    int solve(int amount, vector<int> &coins)
    {
        int n = coins.size();
   vector<vector<int>> dp(n, vector<int> (amount+1, 0));
   
  for(int tar=0;tar<=amount;tar++)
  {
     if(tar % coins[0] == 0){
        dp[0][tar] = 1;
     }
  }
  for(int index=1;index<n;index++)
  {
    for(int tar=0;tar<=amount;tar++)
    {
        int notTake = dp[index-1][tar];
        int take=0;
        if(coins[index] <= tar)
        {
            take = dp[index][tar-coins[index]];
        }
        dp[index][tar] = take+notTake;
    }
  }
  return dp[n-1][amount];
    }
public:
    int change(int amount, vector<int>& coins) {
     return solve(amount,coins);
    }
};