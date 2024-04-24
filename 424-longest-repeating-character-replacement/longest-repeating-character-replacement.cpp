class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0;
        vector<int> mp(26,0);
        int maxLen = 0, maxFreq =0;
        while(r<s.length())
        {
        //count frequency of char 
        mp[s[r]-'A']++;
        maxFreq = max(maxFreq, mp[s[r]-'A']);
        int windowSize = r-l+1;
// if not valid 
    if(windowSize - maxFreq > k)
    {
      mp[s[l]-'A']--;
    l = l+1; 
}
if((r-l+1)-maxFreq <= k)
{
    maxLen = max(maxLen,(r-l+1));
    r++;
}
        }
        return maxLen;
    }
};