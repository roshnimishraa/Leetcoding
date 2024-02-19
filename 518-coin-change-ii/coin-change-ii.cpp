class Solution {
    private:
int helper(int index,int target,vector<int> &coins,vector<vector<int>> &dp)
{
// base case 
if(index == 0){
    if(target % coins[0] == 0) return 1;
    else return 0;
}
if(dp[index][target]!=-1) return dp[index][target];

int notTake = helper(index-1,target,coins,dp);
int take=0;
if(coins[index] <= target) 
{
take = helper(index,target-coins[index],coins,dp);
}
return dp[index][target]=(take+notTake);
}
public:
    int change(int amount, vector<int>& coins) {
int n = coins.size();
vector<vector<int>> dp(n,vector<int>(amount+1,0));
// base case 
// target == 0
for(int tar=0;tar<=amount;tar++)
{
dp[0][tar] = (tar % coins[0]==0);
}

for(int i=1;i<n;i++)
{
for(int tar=0;tar<=amount;tar++)
{
int notTake =dp[i-1][tar];
int take=0;
if(coins[i]<=tar){
    take = dp[i][tar-coins[i]];
}

dp[i][tar] = take+notTake;
}
}
return dp[n-1][amount];
    }
};