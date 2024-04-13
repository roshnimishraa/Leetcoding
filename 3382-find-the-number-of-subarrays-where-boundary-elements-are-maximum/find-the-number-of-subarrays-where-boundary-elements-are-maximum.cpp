class Solution {
    private:
vector<int> prevGreater(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n,-1);
    stack<int> s;
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && nums[i]>nums[s.top()])
        {
            result[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    return result;
}
public:
    long long numberOfSubarrays(vector<int>& nums) {
        int n = nums.size();
        long long result =0;
vector<int> pGreater(prevGreater(nums));
    unordered_map<int,vector<int>> indices;
    for(int i=0;i<n;i++)
    {
        auto &v = indices[nums[i]];
        v.push_back(i);
        result += v.end()-upper_bound(v.begin(),v.end(),pGreater[i]);
    }
    return result;
    }
};