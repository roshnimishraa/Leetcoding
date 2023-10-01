class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
     int n=nums.size();
        unordered_map<int,int> umap;
        int count=0;
    for(int i=n-1;i>=0;i--){
        if(nums[i] <= k){
          umap[nums[i]]++;
        }
        count++;
      if(umap.size() == k){
            return count;
        }
    }
      
        return -1;
    }
};