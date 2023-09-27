class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1;
        int n = prices.size();
        int profit=0;
    while(j<n)
    {
        if(prices[j] > prices[i])
        {
profit += prices[j] - prices[i];      
        }
        i++;
        j++;
    }
        return profit;
    }
};