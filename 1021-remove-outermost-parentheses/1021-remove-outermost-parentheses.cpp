class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;
        
        for(int i=0;i<s.length(); i++){
            char ch = s[i];
            if(ch == '(')
            {
                
                if(st.size() > 0)
                {
                    ans += '(';
                }
                st.push(ch);
            }
            else{
                //close bracket 
                st.pop();
                if(st.size() > 0){
                ans += ')';
                }
            }
        }
        return ans;
    }
};