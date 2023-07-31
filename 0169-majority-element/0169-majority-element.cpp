class Solution {
public:
    int majorityElement(vector<int>& nums) {
    unordered_map<int,int> umap;
        int maxiCount =0;
        int maxiEle =0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        umap[nums[i]]++;
    }
        
    for(int i=0;i<n;i++){
        int key = nums[i];
        auto temp = umap.find(key);
        
        //condition
        if(temp->second > maxiCount){
            maxiCount = temp->second;
        maxiEle = temp->first;
        }
    }
        return maxiEle;
    }
};