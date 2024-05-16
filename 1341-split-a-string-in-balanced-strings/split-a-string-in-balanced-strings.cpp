class Solution {
public:
    int balancedStringSplit(string s) {
      stack<char> st;
      int count=0;
      for(int i=0;i<s.length();i++)
      {
        if(st.empty() || s[i]==st.top())
        {
            st.push(s[i]);
        }
    else{
        if(!st.empty() && st.top()!=s[i])
        {
            st.pop();
        }
//check if the stack is empty , if yes then
// increment the count by 1
        if(st.empty())
        {
            count++;
        }
    }
      }
      return count;  
    }
};