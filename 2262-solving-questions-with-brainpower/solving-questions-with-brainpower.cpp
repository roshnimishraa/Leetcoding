class Solution {

public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
       
    if(n == 1) {
return questions[0][0];
    }
     vector<long long> dp(200001);
    for(int i=n-1;i>=0;i--)
    {
long long points = questions[i][0];
long long jump = questions[i][1];
long long take=points+ dp[i+jump+1];
long long notTake = dp[i+1];
dp[i] = max(take,notTake);
    }
    return dp[0];
    }
};