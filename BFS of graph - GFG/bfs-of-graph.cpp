//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {

  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//taking a visited array and Initially marked as 0

int vis[V]={0};
//In BFS,start with a “starting” node, mark it as visited,
//and push it into the queue data structure.
  vis[0] = 1;

  queue<int> q;
  q.push(0);  //push starting node
  
 // store bfs traversal 
 vector<int> bfs;
  while(!q.empty()){
      int node = q.front();
      q.pop();
      
     bfs.push_back(node);
     
     for(s it : adj[node]){
         //check if previously visited that node
         if(!vis[it]){
             vis[it]=1;
             q.push(it);
         }
     }
  }
  return bfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends