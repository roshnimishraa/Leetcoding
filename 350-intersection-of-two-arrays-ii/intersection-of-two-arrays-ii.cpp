class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1,mp2;
        vector<int> ans;
        for(auto it:nums1)
        {
            mp1[it]++;
        }
        for(auto it:nums2)
        {
            mp2[it]++;
        }
        for(auto it: mp1)
        {
            int key = it.first;
        if(mp2.find(key) != mp2.end())
        {
 for(int i=0;i<min(mp1[key],mp2[key]);i++)
 {
    ans.push_back(key);
 }
        }
        }
        return ans;
    }
};