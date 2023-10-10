class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
        int posIndex = 0;
        int negIndex = 1;
        vector<int> ans(n,0);
    for(auto it:nums){
        if(it < 0){
            ans[negIndex] = it;
         negIndex += 2;
        }
        else if(it > 0){
            ans[posIndex] = it;
            posIndex += 2;
        }
    }
        return ans;
    }
};