class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
    mp[s[i]] = i;
    }
    vector<int> ans;
    int prev = 0;
    int maxi =0;
    for(int i=0;i<s.size();i++)
    {
        maxi = max(maxi,mp[s[i]]);
    if(maxi == i) //last occurence of char store
    {
// size = maxi - startIndex + 1
ans.push_back(i-prev+1);
prev = i+1;
    }
    }
    return ans;
    }
};