class Solution {
public:
    bool checkValidString(string s) {
        stack<int> starIndex;
        stack<int> openIndex;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            openIndex.push(i);
        }
        else if(s[i]=='*'){
          starIndex.push(i);
        }
    else if(s[i]==')')
    {
        if(openIndex.empty() && starIndex.empty())
        return false;
         else if(!openIndex.empty())
       {
        openIndex.pop();
       }
        else{
        starIndex.pop();
         }
    }
    }
    while(!openIndex.empty())
    {
        if(starIndex.empty()) return false;
// Check if index of '(' is smaller than index of '*'
// (which means '(' appears before '*').
//  If not -> return false.
if(openIndex.top() > starIndex.top()) return false;

openIndex.pop();
starIndex.pop();
}
    return true;
    }
};