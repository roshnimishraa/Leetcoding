/*Create two stack st and min_st
for push(x)
1. check if val <= min_st or empty then push in min_st
2. push value in st

for pop
1. if elementToDeleted is present in st and min_st then pop from min_st & st

for top
st.top()

for getMin
return st.top();

*/

class MinStack {
public:
    stack<int> st;
    stack<int> min_st;
    MinStack() {
        st = stack<int>();
        min_st = stack<int>();
    }
    
    void push(int val) {
        if(min_st.empty() || val <= min_st.top())
        {
            min_st.push(val);
            
        }
        st.push(val);
    }
    
    void pop() {
        if(st.top() == min_st.top()){
            min_st.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
