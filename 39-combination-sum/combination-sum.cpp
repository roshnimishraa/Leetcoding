class Solution {
    void solve(int index, int target, vector<int> arr,vector<vector<int>> &ans, vector<int> &output)
    {
        // base case
        if(index == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(output);
            }
            return;
        }

        // take 
        if(arr[index] <= target)
        {
            output.push_back(arr[index]);
            solve(index, target-arr[index], arr, ans, output);
            output.pop_back();
        }

// not-take
solve(index+1, target, arr, ans, output);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(0, target, candidates, ans, output);
        sort(ans.begin(), ans.end());
        return ans;
    }
};