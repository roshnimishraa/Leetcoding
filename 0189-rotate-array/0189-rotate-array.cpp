class Solution {
public:
    void rotate(vector<int>& nums, int k) {
//  % -> it gives no. from (0 to n-1)
   
        int n = nums.size();
        
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k) % n] = nums[i];
            
        }
//         copy temp into nums vector 
        nums = temp;
    }
};