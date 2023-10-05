class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      
        int n=nums.size();
        int count1=0;
           int count2=0; 
        int mja1=NULL;
        int mja2 = NULL;
vector<int> ans;
   for(int i=0;i<n;i++)
    {
  if(nums[i] == mja1){
            count1++;
        }
      
     else if(nums[i] == mja2)
        {
           count2++;
        }
       
       
       else if(count1 == 0)
        {
        mja1 = nums[i];
             count1 =1;
        }
       
         else if(count2 == 0)
        {
            mja2=nums[i];
            count2=1;
        } 
      
        else { 
        count1--;
            count2--;
        }
    }
     
     int freq1=0,freq2=0;
         int countMajority = n/3;
    for(auto it : nums)
    {
    if(mja1 == it)
    {
        freq1++;
    }
    else if(mja2 == it)
    {
        freq2++;
    }
   
    }
         if(freq1 > countMajority)
         {
        ans.push_back(mja1);
         }
         if(freq2 > countMajority)
         {
        ans.push_back(mja2);
         }
        return ans;
    }
};