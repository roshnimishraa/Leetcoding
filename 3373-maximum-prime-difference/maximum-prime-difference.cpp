class Solution {
public:
bool isPrime(int n)
{
    if(n<=1) return false;
    if(n==2) return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
public:
    int maximumPrimeDifference(vector<int>& nums) 
    {
    vector<int> arr;
    for(int i=0;i<nums.size();i++)
    {
        if(isPrime(nums[i]))
        arr.push_back(i);
    }    
    return arr[arr.size()-1] - arr[0];
    }
};