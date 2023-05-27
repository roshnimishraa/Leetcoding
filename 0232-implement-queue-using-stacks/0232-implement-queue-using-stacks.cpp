
/*Algo For push 
push(x)
1. s1-> s2
2. x->s1
3. s2 -> s1

pop()
s1.pop()
*/


class MyQueue {
public:
    stack<int>s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
while(!s1.empty())
{
    s2.push(s1.top());
    s1.pop();

}

s2.push(x);
while(!s2.empty())
{
    s1.push(s2.top());
    s2.pop();
}
    
}
    
    int pop() 
    {
int ans = s1.top();
s1.pop();
return ans;        
  }
    
    int peek() {
       
   return s1.top();
    }
    
    bool empty() {
     return s1.empty();
    }
};

