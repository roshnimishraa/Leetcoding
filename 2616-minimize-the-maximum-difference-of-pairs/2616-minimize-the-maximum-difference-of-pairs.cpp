class Solution {
    bool isValid(vector<int>& nums,int mid,int p){
      int i=0;
        int n=nums.size();
        int countPairs=0;
        while(i<n-1){
        
            if((nums[i+1] - nums[i]) <= mid){
                countPairs++;
                i+=2; // pairing
            }
            else {
                i++;
            }
        }
        return countPairs >= p;
    }
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int low=0;
        int n=nums.size();
        int high=nums[n-1]-nums[0];
        int ans=0;
    while(low <= high){
        int mid=(low+high)/2;
        
        if(isValid(nums,mid,p)){
            ans = mid;
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    
    }
        return ans;
    }
};