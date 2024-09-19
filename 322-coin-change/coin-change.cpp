class Solution {
    int helper(vector<int> &coins,int amount)
    {
          int n = coins.size();
     vector<int> prev(amount+1, 0);
     vector<int> curr(amount+1,0);

for(int tar=0;tar<=amount;tar++)
{
    if(tar % coins[0] == 0){
       prev[tar] = tar/coins[0];
    }
    else{
        prev[tar] = 1e9;
    }
}
for(int index=1;index<n;index++)
{
    for(int tar=0;tar<=amount;tar++)
    {
    int notTake = 0 + prev[tar];
    int take = INT_MAX;
if(coins[index] <= tar)
{
    take = 1 + curr[tar-coins[index]];
}
curr[tar] = min(take,notTake);
    }
    prev = curr;
}

int ans= prev[amount];
if(ans >= 1e9){
    return -1;
}
return ans;
 }

public:
    int coinChange(vector<int>& coins, int amount) {
      int n= coins.size();
       return helper(coins,amount);
       
    }
};