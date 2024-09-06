class Solution {
public:
    string simplifyPath(string path) {
        string token = "";
    stringstream ss(path);
    stack<string> st;
// tokenize
while(getline(ss, token, '/'))
{
 if(token=="." || token==""){
    continue;
 }
//  folder name
if(token != ".."){
    st.push(token);
}
else if(!st.empty()){
    // ..
    st.pop();
}
}

if(st.empty()) {
    // return root
    return "/";
}
string result="";
while(!st.empty())
{
    result = "/" + st.top()+result;
    st.pop();
}
return result;
    }
};