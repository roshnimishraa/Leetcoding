class Solution {
  
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
vector<int> ahead(2,0); //index+1
vector<int> curr(2,0);
  int profit;
  for(int index=n-1;index>=0;index--)
  {
for(int buy=0;buy<=1;buy++)
{
    if(buy==1)
{
    profit = max(-prices[index] + ahead[0],
     0 + ahead[1]);
}
if(buy == 0){
    profit = max(prices[index]-fee + ahead[1] , 0 + ahead[0]);
}
curr[buy] = profit;
}
ahead = curr;
  }
  return ahead[1];
    }
};