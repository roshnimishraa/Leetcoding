class Solution {
public:
    int search(vector<int>& nums, int target) {
     
        int n= nums.size();
        int res=-1;
    for(int i=0;i<n;i++){
        if(nums[i%n] == target){
            res= i;
        }
        
    }
        return res;
    }
};