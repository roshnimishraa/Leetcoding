class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int> umap;
    for(int i=n-1;i>=0;i--){
        if(nums[i] <= k){
            umap[nums[i]]++;
        }
    count++;
        if(umap.size() == k) return count;
    }
        return count;
    }
};