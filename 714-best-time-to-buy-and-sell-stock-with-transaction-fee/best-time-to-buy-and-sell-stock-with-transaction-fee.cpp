class Solution {
    private:
    int helper(int index, int buy, vector<int> &prices, int fee, vector<vector<int>> &dp)
    {
        int n = prices.size();
        if(index==n){
            return 0;
        }
        if(dp[index][buy] != -1)
        {
            return dp[index][buy];
        }
    int profit;
    if(buy==1){
    profit = max(-prices[index] + helper(index+1, 0, prices, fee, dp), 0 + helper(index+1, 1, prices, fee, dp));
    }
    if(buy == 0){
        profit = max(prices[index] - fee + helper(index+1, 1, prices, fee, dp), 0 + helper(index+1, 0, prices, fee,dp));
    }
    return dp[index][buy] = profit;
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
    vector<vector<int>> dp(n,vector<int> (2,-1));
        return helper(0, 1, prices, fee, dp);
    }
};