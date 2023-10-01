class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
    vector<int> prefix(n,0);
    vector<int> suffix(n,0);
        long long ans=0;
        int maxi=nums[0];
    for(int i=1;i<n;i++)
    {
       prefix[i]=maxi;
     maxi = max(nums[i],maxi);
    }
    maxi = nums[n-1];
    for(int i=n-2;i>=0;i--)
    {
       suffix[i]=maxi;
    maxi = max(nums[i],maxi);
    }
for(int i=0;i<n;i++)
{           
    long long v= (prefix[i]-(1LL*nums[i]))*(1LL*suffix[i]);
    ans = max(ans,v);
}
        return ans;
    }
};