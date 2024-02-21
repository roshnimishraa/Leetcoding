class Solution {
    int dfs(vector<vector<int>> &grid,int i,int j,int &count)
    {
        int n = grid.size();
        int m = grid[0].size();
    if(i>=0 && i<n && j>=0 && j<m && grid[i][j]==1)
    {
        grid[i][j] = 0;
        count++;
          dfs(grid,i+1,j,count);
    dfs(grid,i-1,j,count);
    dfs(grid,i,j+1,count);
    dfs(grid,i,j-1,count);
    }
  
    return count;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
      int n = grid.size();
      int m = grid[0].size();
      int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
                int count=0;
        ans = max(ans,dfs(grid,i,j,count));
            }
        }
    }  

    return ans;
    }
};