class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
   unordered_map<int,int> mp;
    for(auto it:nums)
    {
        mp[it]++;
    }    
    for(int i=1;i<=nums.size();i++)
    {
        // if index does not exist 
        if(mp.find(i)==mp.end())
        {
            ans.push_back(i);
        }
    }
    return ans;
    }
};