class Solution {
    int sumByD(vector<int> &arr,int div)
    {
        int sum =0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
     sum = sum + ceil((double)(arr[i]) /(double)(div));
            
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
      int high = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > high) {
            high = nums[i];
        }
    }
        
  while(low <= high)
        {
     int mid = (low + high)/2;
            if(sumByD(nums,mid) <= threshold){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};