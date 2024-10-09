class Solution {
    private:
  int mod = 1e9;
    int helper(string s, string t)
    {
        int n = s.length();
        int m = t.length();
      vector<int> prev(m+1,0);
      vector<int> curr(m+1,0);

     prev[0] = curr[0] = 1;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                if(s[i-1] == t[j-1]){
                curr[j] = (prev[j-1]%mod + prev[j]%mod)%mod;
                }else{
                    curr[j] = prev[j];
                }
            }
            prev = curr;
        }
        return prev[m]%mod;
    }
public:
    int numDistinct(string s, string t) {
      
  return helper(s,t);
    }
};