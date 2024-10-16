class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxLen=0;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            char ch = s[i];
            if(ch == '('){
                st.push(i);
            }
            else{
                st.pop(); //close

                if(st.empty())
                {
            st.push(i); //current next index as valid index
                }
                else{
                    // update maxLen
            maxLen = max(maxLen, i-st.top());
                }
            }
        }
        return maxLen;
    }
};