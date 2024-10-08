//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n=matrix.size();
	    
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<n;j++)
	       {
	       //unreachable node mark INT_MAX
	           if(matrix[i][j]==-1){
	               matrix[i][j]=1e9;
	           }
	       if(i==j) {
	 // diagonal node [0,0],[1,1]..[n,n] cost = 0
	 matrix[i][j] =0;
	  
	       }
	       }
	   }
	   
// 	  compute shortest path via every node
for(int k =0; k<n; k++)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
    // if node has already less value then computed 
    // value then do not update 
    matrix[i][j] = min(matrix[i][j], 
    matrix[i][k] + matrix[k][j]);
        }
    }
}

// 	 if node is not reachable then return -1
 for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<n;j++)
	       {
	       //unreachable node mark INT_MAX
	           if(matrix[i][j]== 1e9){
	               matrix[i][j]= -1;
	           }
	      
	       }
	   }
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends