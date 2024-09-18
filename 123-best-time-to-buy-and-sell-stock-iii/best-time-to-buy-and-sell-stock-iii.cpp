class Solution {
    private:
int helper(int index,int buy, int cap, vector<int> 
&prices,vector<vector<vector<int>>> &dp)
{
   int n = prices.size();
   if(index==n || cap == 0){
    return 0;
   }
   if(dp[index][buy][cap] != -1){
    return dp[index][buy][cap];
   }
   int profit = 0;
 if(buy == 1){
  profit = max(-prices[index]+helper(index+1, 0, cap,prices,dp), 0+helper(index+1, 1, cap,prices,dp));
 }
 else{
    profit = max(prices[index]+helper(index+1,1,cap-1,prices,dp), 0+helper(index+1,0,cap,prices,dp));
 }
 return dp[index][buy][cap]=profit;
}
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
vector<vector<vector<int>>> dp
(n, vector<vector<int>> (2,vector<int>(3,-1)));

        int index=0, buy=1, cap=2;
        return helper(index,buy,cap, prices,dp);
    }
};