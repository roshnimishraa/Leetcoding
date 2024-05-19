class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
     dp[m-1][n-1] = 1;

        // Fill the dp table starting from bottom-right to top-left
        for (int i = m-1; i >= 0; --i) {
            for (int j = n-1; j >= 0; --j) {
                if (i == m-1 && j == n-1) continue; // Skip the starting point

                int up = (i < m-1) ? dp[i+1][j] : 0;
                int left = (j < n-1) ? dp[i][j+1] : 0;

                dp[i][j] = up + left;
            }
        }

        return dp[0][0];
    }
    };