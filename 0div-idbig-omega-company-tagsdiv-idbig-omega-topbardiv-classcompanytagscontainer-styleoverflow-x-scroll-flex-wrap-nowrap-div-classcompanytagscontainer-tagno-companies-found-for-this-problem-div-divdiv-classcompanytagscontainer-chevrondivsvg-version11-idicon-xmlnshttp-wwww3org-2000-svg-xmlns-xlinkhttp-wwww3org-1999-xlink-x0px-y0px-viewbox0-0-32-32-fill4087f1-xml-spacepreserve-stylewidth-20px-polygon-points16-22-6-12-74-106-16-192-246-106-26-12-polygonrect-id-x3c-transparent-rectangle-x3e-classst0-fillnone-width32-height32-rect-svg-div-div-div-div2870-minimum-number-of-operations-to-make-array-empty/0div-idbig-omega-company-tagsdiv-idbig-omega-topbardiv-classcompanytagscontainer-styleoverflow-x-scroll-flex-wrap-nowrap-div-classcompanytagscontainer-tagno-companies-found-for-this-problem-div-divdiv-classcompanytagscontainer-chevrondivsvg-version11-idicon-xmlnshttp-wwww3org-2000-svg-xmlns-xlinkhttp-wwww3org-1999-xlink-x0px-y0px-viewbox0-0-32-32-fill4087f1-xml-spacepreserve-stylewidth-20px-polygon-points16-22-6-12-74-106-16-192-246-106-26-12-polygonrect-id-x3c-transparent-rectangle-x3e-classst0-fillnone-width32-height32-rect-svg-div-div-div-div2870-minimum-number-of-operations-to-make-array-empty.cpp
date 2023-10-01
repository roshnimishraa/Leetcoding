class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        unordered_map<int,int> umap;
    for(auto it : nums)
    {
        umap[it]++;
    }
    for(auto temp : umap)
    {

    if(temp.second == 1){
        return -1;
    }
    int times = temp.second;
     if(times % 3 == 0) {
         ans += times/3;
    }
    else {
        ans += times/3 + 1;
    }
    }
        return ans;
    }
};