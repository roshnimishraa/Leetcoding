class Solution {
    int possible(vector<int> &arr,int day,int m,int k){
        int count=0;
        int n=arr.size();
        int noOfBouquet = 0;
      //day = mid
        for(int i=0;i<n;i++){
            if(arr[i] <= day){
                count++;
            }
            else{
               noOfBouquet += (count/k);
                count = 0; 
            }
        }
        //No. of bouquets in any array can be formed 
       noOfBouquet += (count/k);
        return noOfBouquet >=m; 
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        //corner case m*k > n 
        long long val=1LL*m*k;
        if(val > n){
            return -1;
        }
    //find min & max in an array 
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            
                 mini = min(bloomDay[i],mini);
                maxi = max(bloomDay[i],maxi);
         
        }
        
//   apply binary search 
        int low = mini,  high = maxi;
        int ans =-1;
    while(low<= high){
        int mid= low + (high-low)/2;
        if(possible(bloomDay,mid,m,k))
        {
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        }
        return low;
    }
};