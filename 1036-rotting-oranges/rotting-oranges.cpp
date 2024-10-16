class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int n = grid.size();
        int m = grid[0].size();
    int time = 0, count=0, total=0;
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        // total oranges fresh + rotten 
        if(grid[i][j] != 0){
            total++;
        }
        if(grid[i][j] == 2)
        {
            q.push({i,j});
        }
        }
    }

    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    while(!q.empty())
    {
        int size = q.size();
        count += size;
    for(int k=0;k<size;k++)
    {
int nrow = q.front().first;
        int ncol = q.front().second;
        q.pop();

for(int i=0;i<4;i++)
{
    int x = nrow + dx[i];
    int y = ncol + dy[i];
if(x<0 || x>=n || y<0 || y>=m || grid[x][y] != 1)
continue;
grid[x][y] = 2;
q.push({x,y});
}
  
    }
      if(!q.empty()){
        time++;
    }
          }
  
    return (total == count) ? time : -1;
    }
};