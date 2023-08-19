class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int low=0;
        int n=nums.size();
        int high = n-1;
        int count=0;
        while(low<high){
            if(nums[low] + nums[high] < target){
                count += high - low;
                low++;
            }
            else{
                high--;
            }
        }
        return count;
    }
};