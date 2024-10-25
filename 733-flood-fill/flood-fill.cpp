class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
      int n = image.size();
    int m = image[0].size();
        int prevColor = image[sr][sc];
     if(prevColor == color) return image;

     queue<pair<int,int>> q;
     q.push({sr,sc});

     image[sr][sc] = color; //newColor

     int dx[] = {-1, 1, 0, 0};
     int dy[] = {0, 0, 1, -1};

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

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
        image[nrow][ncol] == prevColor)
        {
            image[nrow][ncol] = color;
            q.push({nrow, ncol});
        }
        }
     }
     return image;
    }
};