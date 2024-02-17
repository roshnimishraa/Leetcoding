class Solution {
public:
bool dfs(int node,vector<vector<int>> &adj,vector<int> &vis,vector<int> &pathVis,vector<int> &checkCycle)
{
vis[node] = 1;
pathVis[node] = 1;
checkCycle[node] = 0;
for(auto &it:adj[node])
{
if(!vis[it])
{
    if(dfs(it,adj,vis,pathVis,checkCycle) == true)
return true;
}

else if(pathVis[it])
{
  return true;
}
}
checkCycle[node] = 1;
pathVis[node] = 0;
return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
int V = graph.size();
vector<int> vis(V,0);
vector<int> pathVis(V,0);
vector<int> safeNode(V,0);
for(int i=0;i<V;i++)
{
    if(!vis[i])
    {
dfs(i,graph,vis,pathVis,safeNode);
    }
}
vector<int> ans;
for(int i=0;i<V;i++)
{
    if(safeNode[i]==1)
    ans.push_back(i);
}
return ans;
    }
};