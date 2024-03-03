class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
for(int ind=n-1;ind>=0;ind--)
{
for(int prevInd=ind-1;prevInd>=-1;prevInd--)
{
int take=0,notTake=0;
notTake = 0+dp[ind+1][prevInd+1];
if(prevInd == -1 || nums[ind] > nums[prevInd])
{
take = 1 + dp[ind+1][ind+1];
}
dp[ind][prevInd+1] = max(take,notTake);
}
}
return dp[0][0]; //dp[0][-1+1]
    }
};