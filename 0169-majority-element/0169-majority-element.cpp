class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        int n=nums.size();
        int count =0;
        for(int i=0;i<n; i++){
            umap[nums[i]]++;
        }
        
//         iterating through map
        for(auto it: umap){
            if(it.second > (n/2)){
                return it.first; //return key
            }
        }
        return -1;
    }
};