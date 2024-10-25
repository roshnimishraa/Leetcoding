class Solution {
    private:
    void dfs(vector<vector<int>> &grid, int row, int col, int &count)
    {
        int n = grid.size();
        int m = grid[0].size();
 int dx[] = {-1, 1, 0, 0};
 int dy[] = {0, 0, 1, -1};

    count += 1; //increment count

    grid[row][col] = 0; // mark cell as visited

    for(int i=0;i<4;i++)
    {
        int nrow = row + dx[i];
        int ncol = col + dy[i];

    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
    grid[nrow][ncol] == 1)
    {
        dfs(grid, nrow, ncol, count);
    }
    }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
 int maxArea =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
         if(grid[i][j] == 1)
         {
            int area = 0;
            dfs(grid,i,j,area);
            maxArea = max(maxArea, area);
         }
            }
        }
        return maxArea;
    }
};