class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
    
        unordered_map<string,vector<string>> umap;
        
    for(auto it :strs){
        string temp=it;
        
        sort(it.begin(),it.end());
        umap[it].push_back(temp);
    }
    for(auto it : umap){
     
        ans.push_back(it.second);
        
    }
        return ans;
    }
};