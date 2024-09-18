class Solution {
 int helper(vector<int> prices, int ind, int buy,
 vector<vector<int>> &dp) {
    int n = prices.size();
    if (ind >= n) return 0;
  if(dp[ind][buy] != -1){
    return dp[ind][buy];
  }
   int profit;
  if (buy == 1)
   { // We can buy the stock
        profit = max(0 + helper(prices, ind + 1, 1,dp), -prices[ind] + helper(prices, ind + 1, 0,dp));
    }
    
    if (buy == 0) { // We can sell the stock
        profit = max(0 + helper(prices, ind + 1, 0,dp), prices[ind] + helper(prices, ind + 2, 1,dp));
    }
    
 return dp[ind][buy] = profit;
}
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
  vector<vector<int>> dp(n, vector<int>(2,-1));
  return helper(prices,0,1,dp);
    }
};