class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        for(int i=s.size()-2 ; i>=0 ; i--)
        {
            int pos = -1;
            for(int j=i+1 ; j<s.size() ; j++)
            {
                if(s[j] > s[i])
                {
                    if(pos == -1) pos = j;
                    else if(s[j] < s[pos]) pos = j;      
                }
            }
            
            if(pos == -1) continue;
            
            swap(s[i] , s[pos]);
            sort(s.begin() + i + 1 , s.end());
            long long int val = stoll(s);
            if(val > INT_MAX) 
                return -1;
            else
                return val;
        }
        return -1;
        
    }
};

      