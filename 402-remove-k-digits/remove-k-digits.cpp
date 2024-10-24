class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(char digit: num)
        {
            while(!st.empty() && k>0 && st.top() > digit)
            {
               st.pop();
               k--;
            }
            st.push(digit);
        }

  // removing remaining k digits from the end of stack
  while(k>0 && !st.empty())
  {
    st.pop();;
    k--;
  }
// Contruct the result string by popping digits from the stack

string temp="";
while(!st.empty())
{
    temp.push_back(st.top());
    st.pop();
}
// reverse the result string to get the correct order
reverse(temp.begin(),temp.end());

// remove leading zeroes and construct the final result
int m = temp.size();
string result="";
int foundNonZero = 0;
for(int i=0;i<m;i++)
{
    if(temp[i] == '0' && foundNonZero==0)
    continue;

    else 
    result.push_back(temp[i]);
    foundNonZero = 1;
}
// if the result is empty() return 0
if(result.size() == 0)
result.push_back('0');
return result;
    }
};