class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> st;
        string ans;
        for(string it : nums){
            
//             binary to number 
            st.insert(stoi(it,0,2));
        }
        int n = nums.size();
for(int i=0;i<=n;i++){
  if(st.find(i) == st.end())
    {
        ans = bitset<16>(i).to_string();
      return ans.substr(16-n,n);
    }
}
        return "";
    }
};