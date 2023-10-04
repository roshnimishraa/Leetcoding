class Solution {
public:
    //TC : O(N)^2
    //SC : O(1)
    void rotate(vector<vector<int>>& matrix) {
        int n =matrix.size();
  
// 1. Transpose
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
        
// 2. Reverse every row 
    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    }
};