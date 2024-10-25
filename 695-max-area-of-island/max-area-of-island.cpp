class Solution {
    bool isValid(int row, int col, vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

return (row>=0 && row<n && col>=0 && col<m &&
grid[row][col] == 1);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int n = grid.size();
        int m = grid[0].size();
 int dx[] = {-1, 1, 0, 0};
 int dy[] = {0, 0, 1, -1};
int ans=0;
queue<pair<int,int>> q;

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(grid[i][j] == 1)
        {
            grid[i][j] = 0; // marks as visited
           int count = 1;
         q.push({i,j});

    while(!q.empty())
    {
        auto it = q.front();
        q.pop();
        int x = it.first;
        int y = it.second;
        for(int k=0;k<4;k++)
        {
        int nrow = x + dx[k];
        int ncol = y + dy[k];

    if(isValid(nrow, ncol, grid)==true)
    {
        grid[nrow][ncol] = 0;
        count++;
        q.push({nrow,ncol});
    }
        }
    }
    ans = max(ans, count);
    }
    }
}
return ans;
    }
};