class Solution {
    void helper(vector<int> &nums,int n, vector<int> &output,vector<vector<int>> &ans, unordered_set<int> &s){
       
     
        if(output.size() == n){
            ans.push_back(output);
            return;
        }
        for(int i=0;i<n;i++){
            if(s.find(nums[i]) == s.end()){
                output.push_back(nums[i]);
                s.insert(nums[i]);
                helper(nums,n,output,ans,s);
             
                   //exclude
                output.pop_back();
               s.erase(nums[i]);
            }
         
                
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
     vector<int> output;
        int n=nums.size();
           unordered_set<int> s;
        helper(nums,n,output,ans,s);
        return ans;
    }
};