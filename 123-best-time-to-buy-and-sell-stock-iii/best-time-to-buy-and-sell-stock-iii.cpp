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
(n+1, vector<vector<int>> (2,vector<int>(3,0)));

// 1st base case cap == 0 and ind,buy can be anything
// for(int ind=1;i<n;i++)
// {
//  for(int buy=0;buy<=1;buy++)
//  {
//     prices[ind][buy][0]=0;
//  }
// }
// 2nd base case ind==n buy,cap can be anything
// for(int buy=0;buy<=1;buy++)
// {
//     for(int cap=0;cap<=2;cap++)
//     {
//         dp[n][buy][cap]=0;
//     }
// }
int profit=0;
for(int ind=n-1;ind>=0;ind--)
{
    for(int buy=0;buy<=1;buy++)
    {
        for(int cap=1;cap<=2;cap++)
        {
 if(buy==1){
    profit=max(-prices[ind] + dp[ind+1][0][cap],
    0+dp[ind+1][1][cap]);
 }
 else{
    profit = max(prices[ind]+dp[ind+1][1][cap-1],
    0+dp[ind+1][0][cap]);
 }
 dp[ind][buy][cap] = profit;
        }
    
    }
}
return dp[0][1][2];
    }
};