class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
    while(low <= high){
        int mid=(low+high)/2;
    if(nums[mid] == target){
        return true;
    }
//         duplicacy condition
    if(nums[mid] == nums[low] && nums[mid] == nums[high]){
        low++;
        high--;
        continue;
    }
//     case 1.
    if(nums[low] <= nums[mid]){
        if(nums[low] <= target && target < nums[mid]){
            high= mid-1;
        }
        else{
            low=mid+1;
        }
    }
else {
    if(nums[mid] < target && target <= nums[high]){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
    }
        return false;
    }
};