class Solution {
private:
int helper(int index, int buy, vector<int> &prices,
vector<vector<int>> &dp)
{
    int profit=0;
    if(index == prices.size()){
        return 0;
    }
    if(dp[index][buy] != -1){
        return dp[index][buy];
    }
    // buy->(0-sell) (1-buy)
    if(buy == 1){
//    profit = max(take, not take)
profit = max(-prices[index] + helper(index+1, 0, prices,dp), 0+helper(index+1, 1 ,prices,dp));
    }
    else{
    profit = max(prices[index] + helper(index+1, 1,prices,dp), 0+helper(index+1, 0,prices,dp));
    }
    return dp[index][buy] = profit;
}
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
vector<vector<int>> dp(n,vector<int> (2,-1));
      return helper(0,1, prices,dp);      
    }
};