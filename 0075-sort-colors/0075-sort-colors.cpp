class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid =0;
        
        while(mid <= high)
        {
//             IF THE ELEMENT IS 0
            if(nums[mid] == 0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
//             IF THE ELEMENT IS 1
            else if(nums[mid] ==1 ){
                mid++;
            }
            
//             IF THE ELEMENT IS 2            
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};