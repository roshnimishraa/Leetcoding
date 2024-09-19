class Solution {
    private:
   
public:
    bool canPartition(vector<int>& nums) {
 int n = nums.size();
 int sum=0;
 for(int i= 0;i<n;i++)
 {
    sum += nums[i];
 }
 if(sum % 2 !=0 )
 {
    // sum is odd 
    return false;
 }
int target = sum/2;;
vector<vector<bool>> dp(n,vector<bool>(target+1,0));
for(int index=0;index<n;index++)
{
    dp[index][0] = true;
}
if(nums[0]<=target)
{
 dp[0][nums[0]]=true;
}
for(int index=1;index<n;index++)
{
    for(int k=1;k<=target;k++)
    {
        bool notTake = dp[index-1][k];
        bool take=false;
        if(k>= nums[index])
        {
            take = dp[index-1][k-nums[index]];
        }
        dp[index][k] = take || notTake;
    }
}
return dp[n-1][target];
    }
};