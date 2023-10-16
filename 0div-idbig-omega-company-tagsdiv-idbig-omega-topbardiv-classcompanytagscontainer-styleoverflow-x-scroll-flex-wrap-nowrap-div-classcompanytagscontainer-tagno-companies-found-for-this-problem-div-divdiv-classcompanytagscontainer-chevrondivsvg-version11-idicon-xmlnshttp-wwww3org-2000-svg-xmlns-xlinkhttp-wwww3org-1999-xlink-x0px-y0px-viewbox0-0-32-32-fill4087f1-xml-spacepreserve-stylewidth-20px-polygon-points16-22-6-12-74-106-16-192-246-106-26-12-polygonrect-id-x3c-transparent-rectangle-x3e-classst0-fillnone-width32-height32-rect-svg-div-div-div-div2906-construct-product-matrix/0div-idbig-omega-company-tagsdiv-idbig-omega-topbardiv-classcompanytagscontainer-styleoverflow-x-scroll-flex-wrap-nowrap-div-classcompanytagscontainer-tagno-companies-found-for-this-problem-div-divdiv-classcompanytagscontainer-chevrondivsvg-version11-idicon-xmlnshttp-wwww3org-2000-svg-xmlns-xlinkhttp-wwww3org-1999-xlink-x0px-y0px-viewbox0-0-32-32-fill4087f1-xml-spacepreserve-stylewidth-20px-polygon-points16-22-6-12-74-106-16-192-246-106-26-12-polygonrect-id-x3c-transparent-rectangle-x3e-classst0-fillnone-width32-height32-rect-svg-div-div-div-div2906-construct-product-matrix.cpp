class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int mod = 12345;
        int n =grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m,1));
    
        long long prod = 1;
        
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
            ans[i][j] = prod;
          prod = (prod * grid[i][j]) % mod;
    }
}
prod =1 ;
 // Calculate the product of elements in the reverse direction (right to
        // left, bottom to top).
for(int i=n-1;i>=0;i--){
    for(int j=m-1;j>=0;j--){
      ans[i][j] = (ans[i][j] * prod) % mod;
                prod = (prod * grid[i][j]) % mod;

    }
}
        return ans;
    }
};