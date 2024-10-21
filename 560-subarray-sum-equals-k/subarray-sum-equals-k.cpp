class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> mp;
        int result =0;
        mp.insert({0,1});
    int sum = 0; //prefix sum
    for(int i =0;i<n;i++)
    {
        sum += nums[i];
        if(mp.find(sum-k) != mp.end())
        {
            result += mp[sum-k];
        }
        mp[sum]++;
    }
    return result;
    }
};