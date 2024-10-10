class Solution {
    private:
    int solve(string &word1, string &word2)
    {
         int n = word1.size();
 int m = word2.size();
vector<int> prev(m+1,0);
vector<int> curr(m+1,0);


for(int j=0;j<=m;j++)
{
prev[j] = j;
}
     
    for(int i=1; i<=n; i++)
    {
        // Initialize the first column of the current row
        curr[0] = i;
        for(int j=1; j<=m; j++)
        {
 // match
        if(word1[i-1] == word2[j-1])
        {
             curr[j] = 0+ prev[j-1];
        }
        else {
        // not match
int insert = 1 + curr[j-1];
int deletion = 1 + prev[j];
int replace = 1 + prev[j-1];
curr[j] = min(insert,min(deletion,replace));
        }
        }
        prev = curr;
    }
       return prev[m];
    }
public:
    int minDistance(string word1, string word2) {

      return solve(word1,word2);
    }
};