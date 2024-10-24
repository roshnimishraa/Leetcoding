class Solution {
    private:
    bool isCycleDFS(vector<int> adj[], vector<int> &vis, vector<int> &pathVis, int node)
    {
        vis[node] = 1;
        pathVis[node] = 1;
        for(auto it: adj[node])
        {
            if(vis[it] == 0)
            {
         // If a cycle is detected in DFS
                if(isCycleDFS(adj,vis,pathVis,it))
                return true;
            }
// If the neighbor is already being visited (back edge), cycle detected
        else{
       if(pathVis[it] == 1) return true;
        }

        }
        pathVis[node] = 0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       vector<int> adj[numCourses];
       for(auto it: prerequisites)
       {
        int u = it[0];
        int v = it[1];
        adj[v].push_back(u);
       }
       vector<int> vis(numCourses,0);
       vector<int> pathVis(numCourses,0);
       for(int i=0;i<numCourses;i++)
       {
        if(isCycleDFS(adj,vis,pathVis,i))
        return false;
       }
       return true;
    }
};