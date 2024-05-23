class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            int key=nums2[i];
            auto it = mp.find(key);
    // if nums2 is present in map 
    // then decrement the count
    if(it != mp.end() && it->second>0) 
    {
          ans.push_back(nums2[i]);
          it->second--;
    }
        }
        return ans;
    }
};