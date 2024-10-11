class Solution {
    int solve(vector<int> &nums)
    {
        int n = nums.size();
       int prev=0, prev2=0;

        // base case
      prev = nums[0];

 for(int index=1;index<n;index++)
 {
     int take = nums[index];
 if(index > 1){
take += prev2;
 } 
  int notTake =0+ prev;
    
   int curr = max(take,notTake); 
    prev2=prev;
    prev = curr;
 }
  
  return prev;
    }
public:
    int rob(vector<int>& nums) {
        
        return solve(nums);
    }
};