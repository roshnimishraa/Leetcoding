//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
bool isSafe(int node,int color[],bool graph[101][101],int col,int n)
{
    for(int i=0;i<n;i++){
        // graph[i][node] means it is adjacent node
    if(i != node && graph[i][node]==1 && color[i]==col){
        return false;
    }
    }
    return true;
}
  bool helper(int node,int color[],bool graph[101][101],int m,int n)
  {
      if(node == n){
          return true;
      }

for(int i=1;i<=m;i++){
    if(isSafe(node,color,graph,i,n)==true){
        color[node] = i;
if(helper(node+1,color,graph,m,n)==true)
{
    return true;
}
else{
    // backtrack
    color[node] = 0;
}
    }
}
return false;
  }
    bool graphColoring(bool graph[101][101], int m, int n) {
int node =0; 
int color[n] = {0};
helper(node,color,graph,m,n);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends