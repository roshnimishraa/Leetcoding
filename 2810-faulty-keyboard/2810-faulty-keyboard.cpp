class Solution {
public:
    string finalString(string s) {
     string ans;
        for(int j=0;j<s.length();j++){
            char ch=s[j];
            if(ch== 'i'){
                reverse(ans.begin(),ans.end());
               
            }
             else
                ans +=ch;
        }
        return ans;
    }
};