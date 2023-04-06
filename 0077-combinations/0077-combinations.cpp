class Solution {
    void helper(int index,int n,int k,vector<int> &output,vector<vector<int>> &ans)
    {
if(k==0){
ans.push_back(output);
return;
 }
   if(index >n){
 return;
  }
// include
output.push_back(index); 
helper(index+1,n,k-1,output,ans);
output.pop_back();

// exclude
helper(index+1,n,k,output,ans);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=1;
        helper(index,n,k,output,ans);
        return ans;
    }
};