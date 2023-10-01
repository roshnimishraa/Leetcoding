class Solution {
public:
    int jump(vector<int>& nums) {
        
    int n=nums.size();
    for(int i=1;i<n;i++){
        nums[i] = max(i+nums[i],nums[i-1]);
    }
    int count=0;
        int index=0;
    while(index<n-1){
       count++;
    index = nums[index];
    }
        return count;
    }
};