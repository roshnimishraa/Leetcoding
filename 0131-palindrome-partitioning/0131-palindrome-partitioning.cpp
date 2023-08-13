class Solution {
   
    void helper(int index,string s,vector<string> &output,
               vector<vector<string>> &ans)
    {
        if(index==s.size()){
            ans.push_back(output);
            return;
        }
    for(int i=index;i<s.size();i++){
//   include if its palindrom 
        if(isPalindrome(s,index,i)){
            output.push_back(s.substr(index,i-index+1));
            helper(i+1,s,output,ans);
            output.pop_back();
        }
    }
    }
    
 bool isPalindrome(string s,int start,int end){
     while(start <= end){
         if(s[start++] != s[end--])
             return false;
     }
     return true;
 }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> output;
        int index=0;
        helper(index,s,output,ans);
        return ans;
    }
};