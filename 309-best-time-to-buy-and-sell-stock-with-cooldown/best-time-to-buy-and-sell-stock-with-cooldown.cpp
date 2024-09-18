class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
     vector<vector<int>> dp(n+2, vector<int>(2,0));
     int profit;
    for(int ind=n-1;ind>=0;ind--)
    {
        for(int buy=0;buy<=1;buy++)
        {
        //  we can buy
        if(buy==1){
        profit = max(-prices[ind]+dp[ind+1][0], 
                      0+ dp[ind+1][1]);
        }
        if(buy==0) //we can sell
        {
        profit = max(prices[ind]+dp[ind+2][1],
                     0+dp[ind+1][0]);
        }
        dp[ind][buy] = profit;
        }
    }
    return dp[0][1];
    }
};