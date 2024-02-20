class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
    unordered_set<int> st;
for(int it : nums)
{
    st.insert(it);
}
for(auto it:st)
{
    int count = 0;
   for(int n : nums)
   {
       if(n ==it) {
           count++;
       }
   }
   if(count > nums.size()/3) 
   ans.push_back(it);
}

return ans;
    }
};