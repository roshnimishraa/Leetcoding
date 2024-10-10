class Solution {
    private:
  bool solve(string s, string p)
  {
     int n = p.length();
    int m = s.length();
vector<bool> prev(m+1,false);
vector<bool> curr(m+1,false);

// case 1
prev[0] = true;
// case 2
for(int j=1;j<=m;j++){
 prev[j] = false;
 }
for(int i=1;i<=n;i++)
{
    bool flag = true;
     for(int k=1; k<=i; k++)
        {
            if(p[k-1] != '*'){
                flag = false;
                break;
            }
        }
      curr[0] = flag;
}
 
for(int i=1;i<=n;i++){
	        // case 3
            bool flag = true;
            for(int k=1;k<=i;k++){
                if(p[k-1] != '*'){
                    flag = false;
                    break;
                }
            }
            curr[0] = flag;
    for(int j=1;j<=m;j++)
    {
 // match
    if(p[i-1] == s[j-1] || p[i-1] == '?')
    {
         curr[j] = prev[j-1];
    }
    else if(p[i-1] == '*')
    {
        // empty || matches 
curr[j]= prev[j] || curr[j-1];
    }
    else
    curr[j] = false;
    }
    prev = curr;
}
   return prev[m];
  }
public:
    bool isMatch(string s, string p) {      
 return solve(s,p);
    }
};