class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        unordered_map<char,char> m1;
        unordered_map<char,bool> m2;
		
        for(int i=0;i<n1; i++)
        {
             if(m1.find(s[i]) != m1.end() )  // if s[i] is present in map or not
            {
                if(m1[s[i]]!=t[i] )      // if s[i] is mapped with the particular character or not
                {
                  return false;
                 }
            }
           else
            {
               if(m2.find(t[i]) != m2.end() )   // check if t[i] is present in map or not
                {
                    return false;
                }
                else
                {
                    m1[s[i]]= t[i];
                    m2[t[i]]=true;
                }
            }
            
         }
     return true;
    }
};