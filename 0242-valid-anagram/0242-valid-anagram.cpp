class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;
        
    if(s.length() != t.length()) return false;
        
    for(int i=0;i<s.length();i++){
        
        umap[s[i]]++;
        umap[t[i]]--;
    }
        for(auto it:umap){
            if(it.second) return false;
        }
        return true;
    }
};