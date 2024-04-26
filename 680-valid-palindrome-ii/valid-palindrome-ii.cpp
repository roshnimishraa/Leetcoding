class Solution {
private:
bool isPal(string s,int i,int j)
{
    while(i<j)
    {
        if(s[i]!=s[j])
    {
       return false;
    }
    i++;
    j--;
}
return true;
}
public:
    bool validPalindrome(string s) {
        int i=0, j=s.length()-1;
    // if string is already a palindrome
if(isPal(s,i,j))
{
    return true;
}
    while(i<j)
    {
    if(s[i] == s[j])
    {
        i++;
        j--;
    }
    else{
   return isPal(s,i+1,j) || isPal(s,i,j-1);
    }
    }
    return false;
    }
};