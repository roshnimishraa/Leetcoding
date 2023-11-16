class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string ans;
        for(int i=0;i<n;i++){
//        nums of i -> ith character 
    char ch = nums[i][i];
            ans += (ch == '0') ? "1" : "0"; //inverting nums of i
            
        }
        return ans;
    }
};