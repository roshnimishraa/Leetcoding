//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
//Brute Force Approach : O(2N)
	// largest elements
	int print2largest(int arr[], int n) {
 int largest = arr[0];
 int secondLargest = -1;
 for(int i=0;i<n;i++){
     if(arr[i]>largest){
         largest = arr[i];
     }
 }
 for(int j=0;j<n;j++){
     if(arr[j]>secondLargest && arr[j] != largest){
         secondLargest = arr[j];
     }
 }
 return secondLargest;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends