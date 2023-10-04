class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m =matrix[0].size();
       vector<vector<int>> temp(n,vector<int>(m,0));
        
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        temp[j][n-i-1] = matrix[i][j];
    }
}
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              matrix[i][j]  = temp[i][j];
            }
        }
    }
};
// tc : O (N)^2
// sc : O (N)^2