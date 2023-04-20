class Solution {

    void helper(int index,string str,string mapping[],string output,
               vector<string> &ans)
    {
        int n = str.size();
        if(index >= n)
        {
             ans.push_back(output);
            return;
        }
        
//         include
        int number =str[index]-'0';
        string values = mapping[number];
        
    for(int i=0; i<values.length(); i++)
    {
        output.push_back(values[i]);
        
             helper(index+1,str,mapping,output,ans);
    output.pop_back();
    }
   
    }
    public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output="";
        int index=0;
        
        if(digits.length() == 0) {
            return ans;
        }
    string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        helper(index,digits,mapping,output,ans);
        return ans;
    }
};