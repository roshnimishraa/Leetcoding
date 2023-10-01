class Solution {
public:
    int minOperations(vector<int>& nums) {
     int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        int ans=0;
    for(int i=1;i<n;i++)
    {
        if(nums[i] == nums[i-1])
            count++;
        
        else{
            if(count == 1) 
                return -1;
            
    if(count % 3 == 0) 
        ans += count/3;
    
            else 
        ans += count/3 + 1;
            count=1;
            
        }
    } 
       if(count == 1) return -1;
if(count % 3 == 0)
    ans += count/3;
else 
    ans += count/3 + 1;  
         
        
    return ans;    
    }
};