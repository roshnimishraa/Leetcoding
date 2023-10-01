class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int finalPosition = n-1;
    for(int i=n-2;i>=0;i--)
    {
        if(i + nums[i] >= finalPosition){
            finalPosition = i;
        }
    }
        return finalPosition ==0;
    }
};