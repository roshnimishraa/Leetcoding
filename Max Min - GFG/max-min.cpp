//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
int getMax(int arr[],int n)
{
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int getMin(int arr[],int n)
{
    int mini = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}
   public:
    int findSum(int A[], int N)
    {
    	int maxSum = getMax(A,N);
    	int minSum = getMin(A,N);
    	int Sum = maxSum + minSum;
    	return Sum;
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends