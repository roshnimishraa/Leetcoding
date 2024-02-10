class Solution {
public:
    int maximumDifference(vector<int>& nums) {
    int i=0,maxi=-1;
for(int j=1;j<nums.size();j++)
{
if(nums[i] < nums[j] && (nums[j] - nums[i]) > maxi)
{
    maxi = nums[j] - nums[i];
}
else if(nums[i] >=nums[j]){
    i=j;
}
}    
return maxi;
    }
};