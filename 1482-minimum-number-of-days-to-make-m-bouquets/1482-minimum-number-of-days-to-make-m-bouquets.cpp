class Solution {
    int possible(vector<int>& arr,int mid,int m,int k){
long long count = 0;
        long long noOfB =0;
long long n=arr.size();
        for(int i=0;i<n;i++){
     if(arr[i] <=mid){
  count++;
         
     }
        else {
         
            noOfB += (count/k);
               count =0;
        }
        }
    
        noOfB += (count/k);
        return noOfB >=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
  long long n=bloomDay.size();
      long long ans = -1;
    long long val = 1LL*m*k;
        if(val > n) 
        {
            return -1;
        }
       int mini = INT_MAX;
        int maxi = INT_MIN;
      
        for(int i=0;i<n;i++){
            mini = min(bloomDay[i],mini);
            maxi = max(bloomDay[i],maxi);
            
        }
        long long  low = mini;
        long long  high =maxi;
        while(low <= high ){
            int mid = low + (high - low)/2;
            
            if(possible(bloomDay,mid,m,k)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};