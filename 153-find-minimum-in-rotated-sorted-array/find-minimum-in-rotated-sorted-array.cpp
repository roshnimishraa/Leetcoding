class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high =n-1;
        int mini = INT_MAX;
    while(low <= high)
    {
    int mid = low + (high-low)/2;
    // search space is already sorted
    if(nums[low] <= nums[high])
    {
        mini = min(mini,nums[low]);
        break;
    }
    // left half is sorted 
    if(nums[low] <= nums[mid])
    {
        // store min 
    mini = min(mini,nums[low]);
       // discard left half 
    low = mid+1;
    }
 

    else{
        //right half is sorted store mid as min
        mini = min(mini, nums[mid]);
        // discard right half
        high = mid-1;
    }
    }
    return mini;
    }
};