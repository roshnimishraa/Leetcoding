class Solution {
    private:
    int dfs(int headID, vector<int> &vis, vector<int> adj[], vector<int> &informTime)
    {
        vis[headID] = 1;
        int ans = informTime[headID];
        int maxi = 0;
    for(auto it: adj[headID])
    {
        if(vis[it] == 0)
        {
            maxi = max(maxi, dfs(it, vis, adj, informTime));
        }
    }
    return ans + maxi;
    }
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adj[n];
        for(int i=0;i<n;i++)
        {
            if(manager[i] != -1)
            {
                adj[manager[i]].push_back(i);
            }
        }

        vector<int> vis(n,0);
        vis[headID] = 1;
        return dfs(headID, vis, adj, informTime);
    }
};