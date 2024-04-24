class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
    int i=0,j=0;
    int maxi = 0;
unordered_set<char> st;
while(j<n)
{
    // if not present then insert 
if(st.find(s[j]) == st.end())
{
    int windowSize = j-i+1;
maxi =max(maxi,windowSize);
   st.insert(s[j]);
   j++;
}
else{
    //s[j] present in set
st.erase(s[i]);
i++;
}
}
return maxi;
    }
};