class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
    unordered_map<int,int> mp;
    int ans=0;
    for(auto it:nums)
    {
        mp[it]++;
    }
    for(auto it:mp)
    {
    if(it.second == 1)
    {
        ans = it.first;
    }
    }
    return ans;
    }
};