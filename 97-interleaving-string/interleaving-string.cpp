class Solution {
    private:
    bool solve(string &s1, string &s2, string &s3)
    {
         int n=s1.length();
        int m=s2.length();
     
vector<vector<bool>> dp(n+1, vector<bool>(m+1,false));
   
   if(n+m != s3.size()){
    return false;
   }
for(int i=n; i>=0; i--){
    for(int j=m;j>=0;j--)
    {
        int k=i+j;
     if(i==n && j==m && k==s3.size()){
        dp[i][j] = true;
     }

 else{
     bool result = false;
    if(i<n && s1[i] == s3[k])
    {
        result= dp[i+1][j];
    }
   
    if(j<m && s2[j] == s3[k])
    {
     result = result || dp[i][j+1];
    }
    dp[i][j] = result;
 }
    }
}

       
return dp[0][0];

    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        return solve(s1,s2,s3);
    }
};