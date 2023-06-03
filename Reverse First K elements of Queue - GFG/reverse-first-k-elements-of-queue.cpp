//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends

queue<int> modifyQueue(queue<int> q, int k) {

// step1: pop first k elements from Queue and push into st
stack<int> st;
for(int i=0;i<k;i++)
{
 int val = q.front();
 q.pop();
 st.push(val);
 
}

// step2 : fetch from stack and push int queue
while(!st.empty())
{
    int val = st.top();
    st.pop();
    q.push(val);
}

// step 3: fetch first n-k ele from q and push_back
int t = q.size()-k;
while(t--){
    int val = q.front();
    q.pop();
    q.push(val);
}
return q;
}