class Solution {
public:
    int maxDepth(string s) {
  stack<char> st;
     int maxi =0;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch == '('){
                st.push(ch);
            }
            else if(ch==')'){
            int x=st.size();
            maxi = max(maxi,x);
                st.pop();
            }
        }
        return maxi;
    }
};