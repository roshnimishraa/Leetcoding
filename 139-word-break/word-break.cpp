class Solution {
    bool helper(int i,string s,set<string>& st,vector<int> &dp)
    {
        int n = s.length();
        if(i==n) return true;
    if(dp[i]!=-1) return dp[i];
        string temp;

for(int j=i;j<n;j++)
{
temp += s[j];
if(st.find(temp)!= st.end())
{
   if(helper(j+1,s,st,dp)==true)
   return dp[i]=true;
}
}

return dp[i]=false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) 
    {
   set<string> st;
   int n = s.length();
   vector<int> dp(n+1,-1);
for(auto it:wordDict)
{
    st.insert(it);
}
        return helper(0,s,st,dp);
    }
};