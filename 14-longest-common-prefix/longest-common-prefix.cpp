class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
     sort(str.begin(),str.end());
    int n = str.size();
string a = str[0];
string b = str[n-1];
string ans="";
for(int i=0;i<a.size();i++)
{
    if(a[i]==b[i]) {
    ans += a[i];
    }
    else{
        break;
    }
}
return ans;
    }
};