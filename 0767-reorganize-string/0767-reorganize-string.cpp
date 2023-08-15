class Solution {
public:
    string reorganizeString(string s) {
          string ans="";
        unordered_map<char,int> umap;
     priority_queue<pair<int,char>> pq;
        
    // push char into umap
        for(auto ch : s){
            umap[ch]++;
        }
        
    for(auto itr : umap){
        pq.push({itr.second,itr.first});
    }
        
    //fetching the top most element 
    while(pq.size() > 1){
        auto top1 = pq.top();
        pq.pop();
        
    auto top2 = pq.top();
        pq.pop();
        
    //store char in ans 
        ans += top1.second;
        ans += top2.second;

// after inserting char into pq decrease size by 1 
        top1.first -= 1;
        top2.first -= 1;
        
//  if frequency of char > 0 then again push in pq
    if(top1.first > 0){
        pq.push(top1);
    }
        
    if(top2.first > 0){
        pq.push(top2);
    }
    }
        
    if(!pq.empty()) {
        if(pq.top().first > 1)  return "";
        
        else 
            ans += pq.top().second;
            
    }
        return ans;
    }
};