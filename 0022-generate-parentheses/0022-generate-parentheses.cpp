
class Solution {

    void helper(int open,int close,string output,vector<string> &ans,int n)
    {
      if(close == n){
          ans.push_back(output);
          return;
      }
//     2 case 
//         1. close < open
        if(close<open){
            helper(open,close+1,output+")",ans,n);
        }
//         2. open <n
    if(open <n){
        helper(open+1,close,output+"(",ans,n);
        
    }
    }
    public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string output = "";
        int open =0, close =0;
        
        helper(open,close,output,ans,n);
        return ans;
    }
};