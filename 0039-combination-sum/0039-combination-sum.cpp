class Solution {

void helper(int index,int sumTillNow,vector<int>& arr,int target,
           vector<int> &output,vector<vector<int>> &ans)
{
    int n = arr.size();
    if(sumTillNow == target){
        ans.push_back(output);
    }
    if(sumTillNow >= target){
        return;
    }
    if(index >= n){
        return;
    }

//     exclude
// recursive call 
    helper(index+1,sumTillNow,arr,target,output,ans);

//     include
    sumTillNow += arr[index];
output.push_back(arr[index]);
      // We keep on the i-th Element & ask recursion to do rest of the task
    
    helper(index,sumTillNow,arr,target,output,ans);
    output.pop_back();
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        
        int sumTillNow =0;
            int index=0;

        helper(index,sumTillNow,candidates,target,output,ans);
        return ans;
    }
};