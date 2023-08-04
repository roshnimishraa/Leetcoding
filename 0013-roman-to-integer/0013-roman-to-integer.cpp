class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>umap;
        int ans=0;
    umap= {
            {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}
        };
        
    for(int i=0;i<s.length();i++){
        if(umap[s[i]] <umap[s[i+1]]){
            ans -=umap[s[i]];
        }
        else{
            ans +=umap[s[i]];
        }
    }
        return ans;
    }
};