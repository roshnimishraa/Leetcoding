class Solution {
public:
void dfs(int row,int col,vector<vector<char>> &grid,vector<vector<int>> &vis)
{
      int n=grid.size();
    int m = grid[0].size();
vis[row][col]=1;
int dx[]={-1,0,1,0}; 
int dy[]={0,1,0,-1};          
for(int i=0;i<4;i++)
{
    int x=row+dx[i];
    int y=col+dy[i];
if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] &&
 grid[x][y]=='1')
{
dfs(x,y,grid,vis);
}
}
}
    int numIslands(vector<vector<char>>& grid)
    {
    int n=grid.size();
    int m = grid[0].size();
vector<vector<int>> vis(n,vector<int>(m,0));
int count=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
{
    if(!vis[i][j] &&  grid[i][j]=='1')
    {
 dfs(i,j,grid,vis);
         count++;
    }
}
}
return count;
    }
};
