class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int index = n-1;
 for(int i=n-1;i>=0;i--)
 {
    if(nums[i]+i >= index)
    {
        index = i;
    }
 }
 if(index == 0) 
 return true;

 return false;
    }
};