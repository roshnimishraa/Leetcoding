class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        vector<int> dp(n+1,0);
    dp[n] = 1; //if reached till last index that means 
            //1 valid solution is found
for(int i=n-1;i>=0;i--)
{
 if(s[i]=='0') 
 {
  dp[i] = 0;
 }
 else{
int op1= dp[i+1];
int op2=0;
if(i+1<n)
{
if(s[i]=='1'||(s[i]=='2' && s[i+1]<='6'))
{
 op2= dp[i+2];
}
}
dp[i] = op1+op2;
 }
} 
return dp[0];
    }
};