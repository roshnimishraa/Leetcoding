class DisjointSet{
    public:
    vector<int> parent, size;

    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1);

        for(int i=0;i<=n;i++){
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node){
        if(node == parent[node]){
            return node;
        }
    return parent[node] = findUPar(parent[node]);
    }


void unionBySize(int u, int v)
{
    int ulp_u = findUPar(u);
    int ulp_v = findUPar(v);

    if(ulp_u == ulp_v) return;
    
    if(size[ulp_u] < size[ulp_v]){
        parent[ulp_u] = ulp_v;
        size[ulp_v] += size[ulp_u];
    }
    else{
        parent[ulp_v] = ulp_u;
        size[ulp_u] += size[ulp_v];
    }
}
};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet ds(n);
        int countExtra = 0;
    for(auto &it: connections){
        int u = it[0];
        int v = it[1];
    // both have same parent and this is extra edge
    if(ds.findUPar(u) == ds.findUPar(v))
    {
        countExtra++;
    }
    else{
        ds.unionBySize(u,v);
    }
    }
    int components = 0 ;
    for(int i=0;i<n;i++){
        if(ds.parent[i] == i){
            components++;
        }
    }

    int ans = components-1;
   if(countExtra < ans){
    return -1;
   }
   return ans;
    } 
};