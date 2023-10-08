class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
   //jump nums[i+j]
 int i=0,lastJumpPos=0,maxReachable=0;
    int jumpCount=0;
    
    while(lastJumpPos < n-1)
    {
        maxReachable = max(maxReachable,i+nums[i]);
        
        if(i == lastJumpPos)
        {
            lastJumpPos = maxReachable;
            jumpCount++;
        }
        i++;
    }
        return jumpCount;
    }
};