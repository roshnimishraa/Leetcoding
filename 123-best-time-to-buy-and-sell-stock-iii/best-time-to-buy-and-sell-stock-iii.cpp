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
vector<vector<int>> after(2,vector<int>(3,0));
vector<vector<int>> curr(2,vector<int>(3,0));

int profit=0;
for(int ind=n-1;ind>=0;ind--)
{
    for(int buy=0;buy<=1;buy++)
    {
        for(int cap=1;cap<=2;cap++)
        {
 if(buy==1){
    profit=max(-prices[ind] + after[0][cap],
    0 + after[1][cap]);
 }
 else{
    profit = max(prices[ind] + after[1][cap-1],
    0 + after[0][cap]);
 }
curr[buy][cap] = profit;
        }
    after = curr;
    }
}
return after[1][2];
    }
};