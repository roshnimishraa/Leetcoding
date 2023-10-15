class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       string ans="";
        int n = s.length();
    for(int i=0;i<n;i++)
    {
        string temp;
        int count=0;
        for(int j=i;j<n;j++)
        {
            temp.push_back(s[j]);
if(s[j] == '1')
{
    count++;
}
    if(count==k)
    {
    if(ans=="")
    {
        ans = temp;
    }
        else if(temp.size() <ans.size())
        {
            ans = temp;
        }
        else if(temp.size() == ans.size() && temp<ans)
        {
            ans = temp;
        }
        break;
    }
        }
    }
        return ans;
    }
};