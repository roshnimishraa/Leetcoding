class Solution {
public:
bool helper(int index,int target,vector<int> &nums,vector<vector<int>> &dp)
{
if(target == 0) return true;
if(index == 0)    return (nums[0] == target);
if(dp[index][target]!=-1) return dp[index][target];
bool notTake = helper(index-1,target,nums,dp);
bool take = false;
if(target >= nums[index])
{
take = helper(index-1,target-nums[index],nums,dp);
}
return dp[index][target] = take|notTake;
}
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
for(int i=0;i<n;i++)
{
sum += nums[i];
}
if(sum % 2 !=0) return false;
 
int target = sum/2;
vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
return helper(n-1,target,nums,dp);
    }
};