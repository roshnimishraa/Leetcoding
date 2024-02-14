class Solution {
    int helper(int index,int target,vector<int> &coins,
    vector<vector<int>> &dp)
    {
if(index==0) {
if(target % coins[0] == 0) 
return target/coins[0];
else return 1e9;
}
if(dp[index][target]!=-1) 
return dp[index][target];

int notTake = 0+helper(index-1,target,coins,dp);
int take = INT_MAX;
if(coins[index] <= target)
{
    take = 1+helper(index,target-coins[index],coins,dp);
}
return dp[index][target] = min(take,notTake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n =coins.size();
vector<vector<int>> dp(n,vector<int>(amount+1,-1));

int ans=helper(n-1,amount,coins,dp);
if(ans >= 1e9){
    return -1;
}
return ans;
    }
};