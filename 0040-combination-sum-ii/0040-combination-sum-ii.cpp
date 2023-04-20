class Solution {
private :
    
void help(int i, vector<int> &arr, int n, vector<int> &output, vector<vector<int>> &ans, int sum, int target) {
    
    // If sum is equal to target, we have reached a Valid Combination
    
    if(sum == target) 
    {
        ans.push_back(output) ;
        return;
    }
    
    // If at any moment, sum becomes greater than target, we don't need to proceed further
    
    if(sum > target) return ;
    
    // If we reach the end of arr[], we cannot go any further so we return back
    
    if(i == n) return;

    // Include the i-th Element into our Subset & Sum
    
    output.push_back(arr[i]) ;
    sum += arr[i] ;
    
    // Ask recursion to do rest of the task
    help(i + 1, arr, n, output, ans, sum, target) ;
    
    // Backtrack and undo the change we have done
    
    output.pop_back();
    sum -= arr[i];
    
    // Use the While Loop to skip all the duplicate occurrences of i-th Element
    
    while(i + 1 < arr.size() && arr[i] == arr[i + 1]) i++ ;
    
    // Don't pick the i-th Element and ask recursion to do rest of the task
    
    help(i + 1, arr, n, output, ans, sum, target) ;
}

    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
    vector<int> output ;
    vector<vector<int>> ans ;
    int sum = 0;
    int n = candidates.size() ;
    sort(candidates.begin(), candidates.end()) ;

    help(0, candidates, n, output, ans, sum, target) ;
        
    return ans ;
}
};
