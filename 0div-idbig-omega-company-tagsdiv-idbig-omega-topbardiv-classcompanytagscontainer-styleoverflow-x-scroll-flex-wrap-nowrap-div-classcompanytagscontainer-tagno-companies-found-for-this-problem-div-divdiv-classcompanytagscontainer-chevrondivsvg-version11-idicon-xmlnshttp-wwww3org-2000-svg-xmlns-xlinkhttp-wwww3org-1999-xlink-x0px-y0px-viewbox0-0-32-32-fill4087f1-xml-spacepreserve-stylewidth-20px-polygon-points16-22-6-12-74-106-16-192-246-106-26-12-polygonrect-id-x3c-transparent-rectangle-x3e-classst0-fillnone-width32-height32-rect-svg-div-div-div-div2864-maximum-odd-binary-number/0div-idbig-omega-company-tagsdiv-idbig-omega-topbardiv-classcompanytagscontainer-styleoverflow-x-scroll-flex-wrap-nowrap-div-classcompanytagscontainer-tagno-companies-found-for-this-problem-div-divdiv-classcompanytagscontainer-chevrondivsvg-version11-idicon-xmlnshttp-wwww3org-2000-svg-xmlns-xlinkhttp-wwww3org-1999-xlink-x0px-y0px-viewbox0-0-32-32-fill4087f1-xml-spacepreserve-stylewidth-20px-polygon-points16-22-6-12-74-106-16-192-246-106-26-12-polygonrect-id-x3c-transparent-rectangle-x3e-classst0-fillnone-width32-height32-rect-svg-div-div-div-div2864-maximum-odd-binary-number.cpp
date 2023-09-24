class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        
    int  j=0;
    for(int i=0;i<n;i++)
    {
 if(s[i] == '1'){
     swap(s[j],s[i]);
     j++;
 }
       
    }
         swap(s[j-1],s[n-1]);
        return s;
    }
};