class Solution {
public:
static bool compare(pair<int,int> p1,pair<int,int> p2)
{
      // Sort on the basis of decreasing order
    // of frequencies
    return p1.second > p2.second;
}

    vector<int> topKFrequent(vector<int>& nums, int k) {
     vector<int> ans;
    unordered_map<int,int> mp;
for(auto it:nums){
    mp[it]++;
}   
vector<pair<int,int>> vec;
for(auto it:mp)
{
    vec.push_back({it.first,it.second});
}
sort(vec.begin(),vec.end(),compare);
for(int i=0;i<k;i++)
{
ans.push_back(vec[i].first);
}
return ans;
    }
};