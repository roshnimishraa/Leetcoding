class Solution {
    int solve(int index,string &s,vector<int> &dp)
    {
    int n = s.length();
if(dp[index]!=-1) return dp[index];
    // base case => valid split 
    if(index == n) {
        return 1;
    }
    if(s[index] == '0')
    {
        return 0;
    }
    
// since only 2-digit mapping is given therefore 
// partition can be done atmost 2 places 
int op1 = solve(index+1,s,dp);
int op2=0;
if(index+1 < n)
{
if(s[index]=='1'||(s[index]=='2' && s[index+1]<='6'))
{
 op2 = solve(index+2,s,dp);
}
}
return dp[index]=op1+op2;
    }
public:
    int numDecodings(string s) {
        int n=s.length();
        vector<int> dp(n+1,-1);
       return solve(0,s,dp); 
    }
};