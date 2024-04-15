class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int need = target-nums[i];
    if(mp.find(need)!=mp.end())
    {
        return {i,mp[need]};
    }
    else{
        mp.insert({nums[i],i});
    }
    }
    return {};
    }
};