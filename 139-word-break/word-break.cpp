class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
vector<bool> dp(n+1,0);
dp[n] = 1;
unordered_set<string> st;
for(string &it:wordDict){
    st.insert(it);
}
for(int i=n-1;i>=0;i--)
{
    string word;
    for(int j=i;j<n;j++)
    {
word+= s[j];
if(st.find(word) != st.end())
{
    if(dp[j+1])
    {
        dp[i] =1;
    }
}
    }
}
return dp[0];
    }
};