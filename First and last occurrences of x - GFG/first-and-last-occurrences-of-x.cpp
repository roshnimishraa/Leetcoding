//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    int firstOcc(int arr[],int n,int target)
    {
        int low=0,high=n-1;
    int first=-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        
    if(arr[mid] == target){
      first = mid;
      high =mid-1;
    }
    else if(arr[mid] > target)
    {
        high = mid-1;
    }
    else {
        //arr[mid] < target 
        low = mid+1;
    }
    }
    return first;
    }
    
int secondOcc(int arr[],int n,int target)
{
    int low=0,high=n-1;
    int second=-1;
    
while(low<=high){
    int mid = low+(high-low)/2;
    
if(arr[mid] == target){
    second = mid;
       low =mid+1;
}
else if(arr[mid] > target){
    high = mid-1;
}
else{
    low=mid+1;
}
}
return second;
}
    public:
    vector<int> find(int arr[], int n , int x )
    {
     int first = firstOcc(arr,n,x);
     int second =secondOcc(arr,n,x);
     
     return {first,second};   
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends