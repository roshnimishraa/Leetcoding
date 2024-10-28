class Solution {
    public:
    int operate(int a, int b, string token)
    {
        if(token == "+") return a+b;
        if(token == "-") return a-b;
        if(token == "*") return (long)a*(long)b;
        if(token == "/") return a/b;

        return -1;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
             string ch = tokens[i];
      if(ch == "+" || ch=="-" || ch == "*" || ch== "/") 
      {
        int b = st.top();
        st.pop();
        int a = st.top();
        st.pop();

        int result  = operate(a,b,ch);
        st.push(result);
      }
      else{
        st.push(stoi(tokens[i])); //integer
      }
        }
        return st.top();
    }
};