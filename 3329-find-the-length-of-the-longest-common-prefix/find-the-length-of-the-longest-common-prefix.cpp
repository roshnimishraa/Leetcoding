class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        map<string,int> mp1,mp2;
int n1 =arr1.size(), n2 = arr2.size();
for(int i=0;i<n1;i++)
{
string a1 = to_string(arr1[i]);
for(int j=0;j<a1.size();j++)
{
 mp1[a1.substr(0,j+1)]++;
}
}

for(int i=0;i<n2;i++)
{
string a2 = to_string(arr2[i]);
for(int j=0;j<a2.size();j++)
{
 mp2[a2.substr(0,j+1)]++;
}
}

int ans=0;
for(auto i:mp1)
{
    if(mp2[i.first]>=1)
    ans = max(ans,(int)(i.first).size());
}

return ans;
    }
};