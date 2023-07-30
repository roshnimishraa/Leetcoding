class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int curr =0;
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            
            if(ch == '(')
                curr++;
                ans = max(ans,curr);
            
            if(ch == ')')
                curr--;
        }
return ans;
    }
};