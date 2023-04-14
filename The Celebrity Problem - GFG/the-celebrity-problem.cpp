//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    private:
    bool knows(vector<vector<int>> &M,int a,int b,int n){
         
  if(M[a][b] == 1)
      return true;
         
  else
      return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
         stack<int> st;
        //step1: push all element in stack
        for(int i=0; i<n; i++) {
            st.push(i);
        }   
// step 2 : get 2 elements
while(st.size() > 1){
    int a = st.top();
    st.pop();
    int b = st.top();
    st.pop();

// if a knows b: discard a 
if(knows(M,a,b,n)){
    st.push(b);
}
else{
    st.push(a);
}
}

// step 3: verity potential celebrity
int ans = st.top();
// RowCheck all 0
int zeroCount =0;
for(int i=0;i<n;i++){
    if(M[ans][i] == 0)
        zeroCount++;
    
}

if(zeroCount !=n)
    return -1;

// Column check all 1 except diagonal
int oneCount =0;
    for(int i=0; i<n; i++) {
            if(M[i][ans] == 1)
                oneCount++;
        }
// check all 1 except diagonal 
if(oneCount != n-1)
return -1;
     
        return ans;
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends