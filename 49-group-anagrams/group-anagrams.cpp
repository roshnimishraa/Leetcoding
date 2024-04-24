class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
// {sorted string, vector of string which belongs to same family}
unordered_map<string,vector<string>> mp;
  vector<vector<string>> ans;
for(int i=0;i<n;i++)
{
    string temp = strs[i];
    sort(temp.begin(),temp.end());
// map me uss string ke corresponding jo vector h use store krenge
mp[temp].push_back(strs[i]);
}
// push ans in map 
for(auto it:mp)
{
    ans.push_back(it.second);
}
return ans;
    }
};