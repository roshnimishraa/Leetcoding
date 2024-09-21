class Solution {
 private:
int solve(string text1, string text2)
{
    int n =text1.size();
    int m = text2.size();
 vector<int> prev(m+1, 0);
 vector<int> curr(m+1, 0);
 for(int j=0;j<=m;j++)
 {
   prev[j] = 0;
 }
//  there is no need of column
//  for(int i=0;i<=n;i++)
//  {
//     dp[i][0] = 0;
//  }
 for(int index1=1;index1<=n;index1++)
 {
    for(int index2=1;index2<=m;index2++)
    {
        // matching 
        if(text1[index1-1] == text2[index2-1])
   curr[index2] = 1+prev[index2-1];
    // not matching 
    else
  curr[index2] = 0 + max(prev[index2], curr[index2-1]);
    }
    prev = curr;
 }
 return prev[m];
}
public:
    int longestCommonSubsequence(string text1, string text2) {
       return solve(text1, text2);
  }
};