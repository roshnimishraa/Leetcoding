class Solution {
public:
    string reverseWords(string s) {
        if(s.size() == 0)  return s;
        stack<string> st;
        string result;
        int n = s.size();
        for(int i=0;i<n;i++){
            string word;
            
            if(s[i] == ' ')  continue;
            
            while(i < n && s[i] != ' '){
                word += s[i];
                i++;
            }
            st.push(word);
            
        }
        while(!st.empty())
        {
            result += st.top();
            st.pop();
            
            if(!st.empty()) {
                result += " ";
                
            }
        }    
        return result;
     }
};