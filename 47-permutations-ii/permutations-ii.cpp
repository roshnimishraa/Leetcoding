class Solution {
    private:
void helper(int index,vector<int> &nums,vector<vector<int>> &ans)
{
    int n =nums.size();
    unordered_set<int> st;
    if(index == n)
    {
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<n;i++)
    {
if(st.count(nums[i]) == 1) {
    continue;
}
st.insert(nums[i]);
        swap(nums[index],nums[i]);
        helper(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }

}
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
vector<vector<int>> ans;
helper(0,nums,ans);
return ans;
    }
};
