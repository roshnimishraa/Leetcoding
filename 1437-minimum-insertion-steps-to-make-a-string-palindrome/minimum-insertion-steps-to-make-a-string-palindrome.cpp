class Solution {
       int lps(string s, string t)
    {
        int n = s.length(), m = t.length();
   vector<int> prev(m+1, 0);
   vector<int> curr(m+1,0);

    for(int index1=1;index1<=n; index1++)
    {
        for(int index2=1; index2<=m; index2++)
        {
            // matching 
        if(s[index1-1] == t[index2-1])
            curr[index2] =1+ prev[index2-1];
       else
       curr[index2] = 0+max(prev[index2], curr[index2-1]);

        }
prev = curr;
    }
    int lpsLen =  prev[m];
    int ans = n-lpsLen;
    return ans;
    }
public:
    int minInsertions(string s) {
    string t = s;
    int n = s.length(), m = t.length();
    reverse(t.begin(), t.end());
return lps(s,t);
    }
};