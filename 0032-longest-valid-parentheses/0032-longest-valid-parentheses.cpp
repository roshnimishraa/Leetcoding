class Solution {
public:
    int longestValidParentheses(string s) {
           stack<int>st;
        st.push(-1);
        int res=0;
        
        for(int i=0;i<s.size();i++){
        
            if(s[i]=='(') st.push(i);
            
            else{
                if(!st.empty())
                    
                    st.pop();
                
                if(!st.empty()){
                    
//     i-st.top() = curr-st.top()
                    res=max(res,i-st.top());
                }
//     for closing bracket there is no opening bracket
                else st.push(i);
            }
        }
        
        return res;
    }
};