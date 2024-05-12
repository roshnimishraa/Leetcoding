class Solution {
    private:
    const int M=1e9+7;
int solve(int length,int low, int high, int zero, int one,vector<int> &dp)
{
    if(length > high){
        return 0;
    }
if(dp[length]!=-1) return dp[length];
    bool addOne=false;
    // within range 
if(length>=low && length<=high)
{
 addOne = true;
}
int appendOne = solve(length+one,low,high,zero,one,dp);
int appendZero = solve(length+zero,low,high,zero,one,dp);
return dp[length]=(addOne+appendOne+appendZero)%M;
}
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1,-1);
        return solve(0,low,high,zero,one,dp);
    }
};