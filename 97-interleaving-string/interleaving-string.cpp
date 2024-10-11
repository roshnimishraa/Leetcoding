class Solution {
    private:
    bool solve(string &s1, string &s2, string &s3)
    {
         int n=s1.length();
        int m=s2.length();
     
vector<bool> next(m+1,false);
vector<bool> curr(m+1,false);

   if(n+m != s3.size()){
    return false;
   }
for(int i=n; i>=0; i--){
    for(int j=m;j>=0;j--)
    {
        int k=i+j;
     if(i==n && j==m && k==s3.size()){
       curr[j] = true;
     }

 else{
     bool result = false;
    if(i<n && s1[i] == s3[k])
    {
        result= next[j];
    }
   
    if(j<m && s2[j] == s3[k])
    {
     result = result || curr[j+1];
    }
   curr[j] = result;
 }
 next = curr;
    }
}

       
return next[0];

    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        return solve(s1,s2,s3);
    }
};