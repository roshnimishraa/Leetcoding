class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<=high){
            if(nums[low] + nums[high] == 0){
                return nums[high];
                
            }
            else if(nums[low] + nums[high] < 0){
                low++;
            }
            else if (nums[low] + nums[high]  > 0) 
            {
            high--;
            }
        }
        return -1;
    }
};