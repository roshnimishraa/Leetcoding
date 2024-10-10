class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
     vector<int> dp(n,1);   
     vector<int> count(n,1);
     int maxi=1;
     for(int index=0;index<n;index++)
     {
        for(int prev_index=0; prev_index<index;prev_index++)
        {
    if(nums[prev_index]<nums[index] && dp[prev_index]+1 > dp[index])
    {
        dp[index] = dp[prev_index] + 1;
         // Inherit count
         count[index] = count[prev_index];
    }
    else if(nums[prev_index] < nums[index] && dp[prev_index]+1 == dp[index])
    {
        count[index] = count[index]+count[prev_index];
    }
        }
        maxi = max(dp[index],maxi);
     }
     int noOfLIS = 0;
     for(int i=0;i<n;i++)
     {
        if(dp[i] == maxi)
        {
noOfLIS += count[i];
        }
     }
     return noOfLIS;
    }
};