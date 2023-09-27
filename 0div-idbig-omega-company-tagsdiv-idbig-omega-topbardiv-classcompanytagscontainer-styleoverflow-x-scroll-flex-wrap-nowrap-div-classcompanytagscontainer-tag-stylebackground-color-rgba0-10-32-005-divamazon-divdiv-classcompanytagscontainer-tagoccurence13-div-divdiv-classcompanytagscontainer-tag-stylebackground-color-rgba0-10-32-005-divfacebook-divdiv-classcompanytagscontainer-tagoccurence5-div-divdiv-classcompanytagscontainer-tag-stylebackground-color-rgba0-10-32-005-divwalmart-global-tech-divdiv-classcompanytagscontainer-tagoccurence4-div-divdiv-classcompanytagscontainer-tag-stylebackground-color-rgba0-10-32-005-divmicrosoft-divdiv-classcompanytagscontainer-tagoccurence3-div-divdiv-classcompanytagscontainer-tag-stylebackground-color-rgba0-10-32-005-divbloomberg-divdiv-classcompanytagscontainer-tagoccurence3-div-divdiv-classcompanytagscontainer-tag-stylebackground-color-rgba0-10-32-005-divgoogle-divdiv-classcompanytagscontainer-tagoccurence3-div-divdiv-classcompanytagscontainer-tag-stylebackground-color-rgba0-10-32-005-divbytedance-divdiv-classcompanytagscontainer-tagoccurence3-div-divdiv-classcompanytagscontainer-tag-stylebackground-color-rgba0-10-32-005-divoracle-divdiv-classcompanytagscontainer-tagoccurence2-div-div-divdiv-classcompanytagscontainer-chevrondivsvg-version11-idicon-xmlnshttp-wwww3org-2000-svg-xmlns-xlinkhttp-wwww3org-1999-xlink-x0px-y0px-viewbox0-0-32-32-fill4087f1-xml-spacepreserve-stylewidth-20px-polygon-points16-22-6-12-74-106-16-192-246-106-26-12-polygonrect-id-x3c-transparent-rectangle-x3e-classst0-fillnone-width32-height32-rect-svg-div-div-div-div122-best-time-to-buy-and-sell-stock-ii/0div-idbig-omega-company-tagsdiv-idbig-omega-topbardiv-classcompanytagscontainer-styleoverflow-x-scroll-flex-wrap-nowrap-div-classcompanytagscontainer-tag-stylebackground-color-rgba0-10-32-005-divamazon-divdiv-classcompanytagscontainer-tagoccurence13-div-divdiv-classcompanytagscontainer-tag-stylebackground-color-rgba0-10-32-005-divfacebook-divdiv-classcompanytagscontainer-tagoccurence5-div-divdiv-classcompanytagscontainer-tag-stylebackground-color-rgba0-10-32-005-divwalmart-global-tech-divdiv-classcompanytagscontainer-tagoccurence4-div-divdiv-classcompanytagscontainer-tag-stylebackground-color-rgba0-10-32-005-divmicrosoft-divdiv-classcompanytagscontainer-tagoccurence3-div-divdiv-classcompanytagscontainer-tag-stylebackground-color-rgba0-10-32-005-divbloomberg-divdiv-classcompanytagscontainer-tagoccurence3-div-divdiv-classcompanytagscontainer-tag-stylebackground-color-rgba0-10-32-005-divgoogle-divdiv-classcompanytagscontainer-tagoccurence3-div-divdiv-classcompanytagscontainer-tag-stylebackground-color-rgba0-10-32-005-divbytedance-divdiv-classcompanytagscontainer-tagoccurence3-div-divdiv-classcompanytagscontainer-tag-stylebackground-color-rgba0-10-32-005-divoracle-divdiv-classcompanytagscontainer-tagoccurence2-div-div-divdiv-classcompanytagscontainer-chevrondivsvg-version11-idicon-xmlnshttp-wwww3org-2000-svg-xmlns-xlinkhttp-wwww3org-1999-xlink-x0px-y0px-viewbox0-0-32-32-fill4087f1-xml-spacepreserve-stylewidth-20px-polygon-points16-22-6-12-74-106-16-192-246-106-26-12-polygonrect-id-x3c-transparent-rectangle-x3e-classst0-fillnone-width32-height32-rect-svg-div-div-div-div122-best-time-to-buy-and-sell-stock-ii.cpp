class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //  maximum profit you can achieve
        int maxProfit =0;
        int n = prices.size();
    for(int i=1;i<n;i++)
    {
maxProfit += max(prices[i]- prices[i-1],0);
        
    }
        return maxProfit;
    }
};