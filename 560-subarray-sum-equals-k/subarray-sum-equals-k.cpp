class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
// {prefixSum(key),count(value)}
unordered_map<int,int> mp;
int result=0;
mp.insert({0,1});
int preSum=0;
for(int i=0;i<n;i++)
{
preSum += nums[i];
// if prefixSum-k present in map 
if(mp.find(preSum-k)!=mp.end())
{
// eg. [1,-1,0] k=0 o/p=3
result += mp[preSum-k];
}
// increase count in map
mp[preSum]++;
}
return result;
    }
};
