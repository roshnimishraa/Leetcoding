//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	int lcs(string x,string y,int m,int n){
	   int t[m+1][n+1];
	  for(int i=0;i<m+1;i++){
	      for(int j=0;j<n+1;j++){
	          if(i==0 || j==0){
	              t[i][j] = 0;
	          }
	      }
	  }
	
for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
        if(x[i-1] == y[j-1] && i!= j)
{
    t[i][j] = 1 + t[i-1][j-1];
}
else{
    t[i][j] = max(t[i-1][j] , t[i][j-1]);
}
    }
}
return t[m][n];
	}
		int LongestRepeatingSubsequence(string str){
 int n=str.length();
 string str2 = str;
 return lcs(str,str2,n,n);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends