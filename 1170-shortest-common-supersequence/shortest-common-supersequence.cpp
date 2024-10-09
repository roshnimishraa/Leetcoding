class Solution {

public:
    string shortestCommonSupersequence(string str1, string str2) 
{
     int n =str1.size();
    int m = str2.size();
    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));

// base case -> i<0 || j<0 but in tabulation dp[-1] is unreachable
// Therefore do shifting of index in order to write tabulation 
// now the base case acc. to tab. if(i==0 || j==0) 
 for(int j=0;j<=m;j++)
 {
   dp[0][j] = 0;
 }
 for(int i=0;i<=n;i++)
 {
    dp[i][0] = 0;
 }
 for(int index1=1;index1<=n;index1++)
 {
    for(int index2=1;index2<=m;index2++)
    {
        // matching 
        if(str1[index1-1] == str2[index2-1])
    dp[index1][index2] = 1+dp[index1-1][index2-1];
    // not matching 
    else
    dp[index1][index2] = 0 + max(dp[index1-1][index2], dp[index1][index2-1]);
    }
 }

    string ans = "";
    int ind1=n, ind2=m;
    while(ind1>0 && ind2>0)
    {
        if(str1[ind1-1] == str2[ind2-1])
        {
            ans += str1[ind1-1];
            ind1--;
            ind2--;
        }
        else if(dp[ind1-1][ind2] > dp[ind1][ind2-1])
        {
          ans += str1[ind1-1];
            ind1--;
        }
        else{
              ans += str2[ind2-1];
            ind2--;
        }
    }
    while(ind1 > 0)
    {
    ans += str1[ind1-1];
    ind1--;
    }
    while(ind2 > 0)
    {
        ans += str2[ind2-1];
        ind2--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};