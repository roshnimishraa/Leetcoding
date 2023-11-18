//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void helper(int index,int k,int n,int sum,vector<int> &output,
  vector<vector<int>> &ans)
  {
      if(sum == n){
          if(k==0){
              ans.push_back(output);
          }
          return;
      }
      if(sum > n || index == 10){
          return;
      }
      
    //   take 
    output.push_back(index);
helper(index+1,k-1,n,sum+index,output,ans);
output.pop_back();

// not take 
helper(index+1,k,n,sum,output,ans);
  }
    vector<vector<int>> combinationSum(int K, int N) {
     vector<vector<int>> ans;
     vector<int> output;
     int sum=0;
     helper(1,K,N,sum,output,ans);
     return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends