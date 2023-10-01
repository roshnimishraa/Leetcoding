class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int ands=nums[0];
        
    for(auto it : nums){
        ands &= it;
    }
    if(ands != 0) {
        return 1;
    }
    int n = nums.size();
        int result =0;
for(int j=0;j<n;j++)
{
    int currentAnd = nums[j];
    while(j+1 < n && currentAnd !=0)
    {
        j++;
        currentAnd &= nums[j];
    }
    if(currentAnd == 0) result++;
}
        return result;
    }
};