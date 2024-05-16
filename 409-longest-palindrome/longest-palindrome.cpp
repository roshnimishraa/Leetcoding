class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int> mp;
    for(auto it:s)
    {
        mp[it]++;
    } 
int maxi=0, count=0;
bool flag = false;
for(auto it:mp)
{
    if(it.second%2==0)
    count+=it.second;
    else
{
count+= it.second-1;
    flag=true;
}
 }
return (flag) ? count+1:count;
    }
};
/* Approach 
1. If the frequency of is even then it can be easily distributed in a 
palindrome string. We will simple add the frequency in 
count.
2. And if the frequency is odd, then we will increase the count by frequency-1.
Why? Because a single odd frequence can be ditributed 
in palindrome by placing it in the middle. 
But we don't know if there are multiple odd frequencies
or not. So, initially we will increment the count by
1 less than the frequency and setting the flag to true 
which means odd frequency exists.
3. If the flag is true at the end then we will add
the prior subtracted 1 to the count. Otherwise
simply return count.*/
