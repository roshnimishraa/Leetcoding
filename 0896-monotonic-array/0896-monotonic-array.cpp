class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool increasing = true;
        bool decreasing = true;
        
    for(int i=0;i<n-1;i++)
    {
        //for inc -> 1 2 3 4 5
      if(nums[i] > nums[i+1]) {
          increasing = false;
      }
    
    //for dec -> 4 3 2 1 
        if(nums[i] < nums[i+1]) {
            decreasing = false;
        }
    
    if(increasing == false && decreasing == false) return false;
    }
        return true;
    }
};