class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low =0;
        int mid =0;
        int high = nums.size()-1;
        
        while(mid <= high)
        {
//             If the element is 0
if(nums[mid] == 0){
    swap(nums[low],nums[mid]);
    low++;
    mid++;
}
//             If the element is 1
            else if(nums[mid] ==1 ){
                mid++;
            }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
        }
    }
};