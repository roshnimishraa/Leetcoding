//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

typedef long long ll;
vector<long long> printFirstNegativeInteger(long long int A[],
     long long int N, long long int K) {
    vector<ll> result;
    deque<ll> deq;
    int i=0,j=0;
    while(j<N){
        if(A[j]<0){
            deq.push_back(A[j]);
        }
    //  window size == k
    // 1. see dq.front() and store in result
if(j-i+1 == K)
{
if(!deq.empty()){ 
        result.push_back(deq.front());
    }
    else{
        result.push_back(0);
    }
    
// Slide the window 
// 1. check i if it is -ve then pop from deq and then i++ & j++
if(A[i] < 0 && !deq.empty()){
    deq.pop_front();
   
}
i++;
    }
        j++;
    }
    return result;
 }