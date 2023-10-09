class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1=0;
        int count2 =0;
        int ele1,ele2;
        
    for(int i=0;i<n;i++)
    {
 if(nums[i] == ele1)
    {
        count1++;
    }
          else if(nums[i] == ele2)
        {
            count2++;
        }
      else if(count1 == 0)
        {
           count1=1;
            ele1=nums[i];
        }
        else if(count2 == 0){
            count2=1;
            ele2 = nums[i];
        }
  
      
        else{
            count1--;
            count2--;
        }
    }
        
    vector<int> ans;
        int freq1=0,freq2=0;
        int countMajority = n/3;
    for(int i=0;i<n;i++)
    {
        if(ele1==nums[i])
        {
            freq1++;
        }
        else if(ele2 == nums[i])
        {
  freq2++;
        }
    }
        
        if(freq1 > countMajority ){
            ans.push_back(ele1);
        }
        if(freq2 > countMajority)
        {
            ans.push_back(ele2);
        }
        return ans;
    }
};