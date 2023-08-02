class Solution {
    void helper(vector<int> &nums,int n,int index,vector<vector<int>> &ans)
    {
        // corner case  
        //index out of bound
        if(index>=n){
      ans.push_back(nums);
            return;
}
        for(int i=index;i<n;i++){
//swap
            swap(nums[i],nums[index]);
            helper(nums,n,index+1,ans);
            swap(nums[i],nums[index]);
            
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;

        int index=0;
        helper(nums,n,index,ans);
        return ans;
    }
};