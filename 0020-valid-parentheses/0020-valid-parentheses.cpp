class Solution {
    private:
    bool matches(char top,char ch){
    
        if(ch == ')' && top == '(' ||
          ch == ']' && top == '[' ||
          ch=='}'  && top == '{')
            
      return true;
   
else
    return false;

}
public:
    bool isValid(string s) {
        stack<char> st;
//         step 1: push into stack 
        for(int i=0;i<s.length();i++){
            int ch = s[i];
            
   if(ch=='(' || ch=='{' || ch=='[')
    {
            st.push(ch);
    }    
            else{
                if(!st.empty()){
          char top = st.top();
    
       //  Comparing with stack top  match(top,current character)
        if(matches(top,ch)){
            st.pop();
        }
        else{
            return false;
        }
    }
        //     closing bracket nhi mila or stack is empty
    else{
        return false;
    }
}
        }
   if(st.empty()){
            return true;
        }
        else{
            return false;
        }

    }
};