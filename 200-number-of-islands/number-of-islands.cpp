class Solution {
    void dfs(int row, int col,vector<vector<char>> &grid,vector<vector<int>> &vis)
    {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        for(int i=0;i<4;i++)
        {
            int nrow = row + dx[i];
            int ncol = col + dy[i];
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol] == '1')
    {
        dfs(nrow, ncol, grid, vis);
    }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j] == '1')
                {
                    dfs(i,j, grid, vis);
                    count++;
                }
            }
        }
        return count;
    }
};