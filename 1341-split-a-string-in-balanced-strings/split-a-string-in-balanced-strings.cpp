class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int balance=0;
    for(auto it:s)
    {
        if(it=='L')
        {
            balance++;
        }
        else{
            balance--;
        }
        if(balance==0)
        {
            count++;
        }
    }
    return count;
    }
};