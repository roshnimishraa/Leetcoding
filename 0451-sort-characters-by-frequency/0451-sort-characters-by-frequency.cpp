class Solution {
public:
    string frequencySort(string s) {
     unordered_map<char,int>umap;
    string ans="";
        
        for(int i=0;i<s.length();i++){
            umap[s[i]]++;
            
        }
        
        priority_queue<pair<int,char>> pq;
        
        for(auto it:umap){
            pq.push({it.second,it.first});
            
        }
        
        while(!pq.empty()){
            int n=pq.top().first;
            
            while(n--){
                ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};