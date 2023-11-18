//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void helper(int n,string output,int lastdigit,vector<string> &ans){
    if(n == 0){
        ans.push_back(output);
        return;
    }
    
    helper(n-1,output+"0",0,ans);
    if(lastdigit == 0){
        helper(n-1,output+"1",1,ans);
    }
}
    vector<string> generateBinaryStrings(int num){
    vector<string> ans;
    string output="";
    int lastdigit =0;
    helper(num,output,lastdigit,ans);
    return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends