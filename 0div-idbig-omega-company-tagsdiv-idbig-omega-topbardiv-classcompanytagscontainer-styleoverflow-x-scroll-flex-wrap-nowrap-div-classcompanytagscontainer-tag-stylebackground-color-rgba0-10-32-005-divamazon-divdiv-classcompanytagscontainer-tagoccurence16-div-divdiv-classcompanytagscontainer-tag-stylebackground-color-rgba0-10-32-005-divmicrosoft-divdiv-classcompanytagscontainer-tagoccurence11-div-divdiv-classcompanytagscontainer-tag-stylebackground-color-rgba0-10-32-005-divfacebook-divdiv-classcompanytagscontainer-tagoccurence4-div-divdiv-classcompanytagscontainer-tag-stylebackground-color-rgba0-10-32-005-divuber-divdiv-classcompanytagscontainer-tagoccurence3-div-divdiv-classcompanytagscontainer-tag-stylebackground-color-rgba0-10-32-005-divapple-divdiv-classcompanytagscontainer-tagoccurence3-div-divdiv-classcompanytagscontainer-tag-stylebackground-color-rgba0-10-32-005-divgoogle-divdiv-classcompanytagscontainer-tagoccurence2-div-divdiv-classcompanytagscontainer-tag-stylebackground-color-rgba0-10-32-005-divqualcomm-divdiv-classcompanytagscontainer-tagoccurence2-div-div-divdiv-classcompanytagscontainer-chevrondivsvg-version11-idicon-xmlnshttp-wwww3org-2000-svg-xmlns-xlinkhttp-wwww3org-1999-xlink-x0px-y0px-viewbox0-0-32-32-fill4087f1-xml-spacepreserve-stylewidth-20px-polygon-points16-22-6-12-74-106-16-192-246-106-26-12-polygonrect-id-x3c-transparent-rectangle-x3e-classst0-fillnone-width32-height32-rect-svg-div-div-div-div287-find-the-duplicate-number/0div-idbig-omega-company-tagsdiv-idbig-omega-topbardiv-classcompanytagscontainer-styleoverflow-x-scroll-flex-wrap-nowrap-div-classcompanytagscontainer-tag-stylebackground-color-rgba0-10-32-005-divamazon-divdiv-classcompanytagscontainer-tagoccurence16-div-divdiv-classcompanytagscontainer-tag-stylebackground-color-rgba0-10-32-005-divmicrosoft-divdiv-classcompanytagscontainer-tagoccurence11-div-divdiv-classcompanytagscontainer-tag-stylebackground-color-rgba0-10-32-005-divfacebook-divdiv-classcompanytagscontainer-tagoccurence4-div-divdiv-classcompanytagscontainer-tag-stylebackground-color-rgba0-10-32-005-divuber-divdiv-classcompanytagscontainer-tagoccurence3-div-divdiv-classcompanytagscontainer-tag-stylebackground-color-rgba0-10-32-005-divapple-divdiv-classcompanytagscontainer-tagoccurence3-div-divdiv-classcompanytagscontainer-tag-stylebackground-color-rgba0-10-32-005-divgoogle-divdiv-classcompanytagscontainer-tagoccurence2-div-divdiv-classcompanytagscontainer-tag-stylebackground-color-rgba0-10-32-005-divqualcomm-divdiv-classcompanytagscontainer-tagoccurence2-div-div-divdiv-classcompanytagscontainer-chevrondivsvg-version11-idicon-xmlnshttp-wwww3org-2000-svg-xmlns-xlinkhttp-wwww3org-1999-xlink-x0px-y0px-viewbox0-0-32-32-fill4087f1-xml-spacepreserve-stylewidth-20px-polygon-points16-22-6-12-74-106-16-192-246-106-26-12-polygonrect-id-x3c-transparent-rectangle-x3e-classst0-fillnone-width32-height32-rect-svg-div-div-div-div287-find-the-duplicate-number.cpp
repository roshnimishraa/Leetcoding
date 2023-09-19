class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int slow=nums[0];
        int fast = nums[0];
        slow = nums[slow];
        fast = nums[nums[fast]];
      
//         detect cycle
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow = nums[0];
        while(slow != fast)
        {
slow = nums[slow];
            fast = nums[fast];
        }
//         again meet
        return slow;
    }
};