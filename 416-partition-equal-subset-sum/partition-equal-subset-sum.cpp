class Solution {
    private:
   
public:
    bool canPartition(vector<int>& nums) {
 int n = nums.size();
 int sum=0;
 for(int i= 0;i<n;i++)
 {
    sum += nums[i];
 }
 if(sum % 2 !=0 )
 {
    // sum is odd 
    return false;
 }
int target = sum/2;;
vector<bool> prev(target+1, false);
vector<bool> curr(target+1, false);

prev[0] = curr[0]=true;
   if (nums[0] <= target)
   {
  prev[nums[0]] = true;
   }
   

for(int index=1;index<n;index++)
{
    for(int k=1;k<=target;k++)
    {
        bool notTake = prev[k];
        bool take=false;
        if(k>= nums[index])
        {
            take = prev[k-nums[index]];
        }
        curr[k] = take || notTake;
    }
    prev = curr;
}
return prev[target];
    }
};