class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(nums.size() == 0){
            return 0;
        }
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[j] != nums[i]){
                  i++;
                
            }

 // copy nums[j] to nums[i] so as to concentrate all unique 
 // elements in ascending order at the initial indices of the vector
     nums[i] = nums[j];
              
        }
 
        return i+1;
    }
};