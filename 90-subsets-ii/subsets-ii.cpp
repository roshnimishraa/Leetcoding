class Solution {
    void solve(int index, vector<int> &nums, vector<int> &output, set<vector<int>> &ans) {
        if (index == nums.size()) {
            ans.insert(output);
            return;
        }

        // Include the current element
        output.push_back(nums[index]);
        solve(index + 1, nums, output, ans);
        output.pop_back();

        // Exclude the current element
        solve(index + 1, nums, output, ans);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        vector<int> output;
        
        // Sort nums to handle duplicates
        sort(nums.begin(), nums.end());
        
        solve(0, nums, output, st);
        
        for (const auto& subset : st) {
            ans.push_back(subset);
        }
        
        return ans;
    }
};
