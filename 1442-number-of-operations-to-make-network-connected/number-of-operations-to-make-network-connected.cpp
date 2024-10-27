class Solution {
    void dfs(vector<vector<int>> &adj, vector<bool> &vis, int src)
    {
        vis[src] = true;
        for(int i: adj[src])
        {
            if(!vis[i])
            dfs(adj, vis, i);
        }
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
 // we need n-1 edges atleast for n vertices, if connection size is lesser means we don't have sufficient edge 
 if(connections.size() < n-1)
 {
    return -1;
 }
 vector<vector<int>> adj(n);
 for(auto it: connections)
 {
     adj[it[0]].push_back(it[1]);
     adj[it[1]].push_back(it[0]);
 }
 vector<bool> vis(n,false);

 int components = 0;
 for(int i=0;i<n;i++)
 {
    if(!vis[i]){
        dfs(adj, vis, i);
        components++;
    }
 }
 return components-1;
    }
};