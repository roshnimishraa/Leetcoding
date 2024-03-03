class Solution {
    private:
int helper(int ind,int prev,vector<int> &nums,vector<vector<int>> &dp)
{
    int n = nums.size();
if(ind == n) {
return 0; //run out of elements
}
if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
// -1 as prev ind can't be stored in table 
// therefore coordinate change prevInd+1
int notTake = 0+helper(ind+1,prev,nums,dp);
int take=0;
if(prev==-1 || nums[ind]>nums[prev])
{
    take = 1+helper(ind+1,ind,nums,dp);
}
return dp[ind][prev+1]=max(take,notTake);
}
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return helper(0,-1,nums,dp);
    
    }
};