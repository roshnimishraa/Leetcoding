class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        int left=0;
        int right=0;
        int ans = INT_MIN;
    unordered_map<char,int> umap;
        while(right < s.length())
        {
          umap[s[right]]++;
            
        if(umap.size() == (right-left + 1)){
            ans = max(ans,right-left+1);
        }
        else if(umap.size() < (right-left+1)){
            while(umap.size() < (right-left+1)){
                umap[s[left]]--;
                
                if(umap[s[left]] == 0){
                    umap.erase(s[left]);
                }
                left++;
            }
        }
            right++;
        }
        return ans;
    }
};