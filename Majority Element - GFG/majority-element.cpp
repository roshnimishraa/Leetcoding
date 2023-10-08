//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
   //moore voting algorithm
   int count=0;
   int element;
   int i=0;
 for(int i=0;i<n;i++)
 
   {
       if(count == 0)
       {
           count=1;
           element = a[i];
       }
       else if(a[i] == element){
           //count=0
count++;
       }
       else{
           count--;
       }
   }
   int count1=0;
   for(int i=0;i<n;i++)
   {
       if(a[i] == element)
       {
           count1++;
       }
       if(count1>n/2)
       {
           return element;
       }
   }
   return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends