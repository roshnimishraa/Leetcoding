class Solution {
    bool matching(char top,char ch)
    {
return ((ch == ')' && top == '(') ||
  (ch == '}' && top == '{')  ||
   (ch == ']' && top == '[') 
  );
    }
public:
    bool isValid(string s) {
        
        stack<char> st;
        for(int i=0;i<s.length(); i++){
          //         ith value 
            char ch = s[i];
            
//    if opening bracket, stack push 
//    if closing bracket, stack top check and pop 
        
//             For opening bracket
    if(ch == '(' || ch == '{' || ch == '[' ){
           st.push(ch);
        
    }
            
else{
//     For Closing bracket
    if(!st.empty())
    {

        char top = st.top();
    
       //  Comparing with stack top  match(top,current character)
        if(matching(top,ch)){
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
// after matching stack is empty
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }

    }
};