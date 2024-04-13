class Solution {
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
    unordered_map<int,vector<pair<int,int>>> adj;
    for(auto &vec:edges)
    {
        int u = vec[0];
        int v = vec[1];
        int w = vec[2];
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
    } 
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
vector<int> ans(n,-1);
vector<bool> visited(n,false);
pq.push({0,0});
ans[0] = 0;
while(!pq.empty())
{
    auto topPair = pq.top();
    pq.pop();
    int currWt = topPair.first;
    int currNode = topPair.second;
if(visited[currNode]) continue;
visited[currNode] = true;

for(auto &nbr : adj[currNode])
{
    int newWt = currWt + nbr.second;
if(newWt < disappear[nbr.first] && (ans[nbr.first] == -1 || newWt < ans[nbr.first]))
{
    pq.push({newWt,nbr.first});
    ans[nbr.first] = newWt;
}
}
}
return ans;
    }
};