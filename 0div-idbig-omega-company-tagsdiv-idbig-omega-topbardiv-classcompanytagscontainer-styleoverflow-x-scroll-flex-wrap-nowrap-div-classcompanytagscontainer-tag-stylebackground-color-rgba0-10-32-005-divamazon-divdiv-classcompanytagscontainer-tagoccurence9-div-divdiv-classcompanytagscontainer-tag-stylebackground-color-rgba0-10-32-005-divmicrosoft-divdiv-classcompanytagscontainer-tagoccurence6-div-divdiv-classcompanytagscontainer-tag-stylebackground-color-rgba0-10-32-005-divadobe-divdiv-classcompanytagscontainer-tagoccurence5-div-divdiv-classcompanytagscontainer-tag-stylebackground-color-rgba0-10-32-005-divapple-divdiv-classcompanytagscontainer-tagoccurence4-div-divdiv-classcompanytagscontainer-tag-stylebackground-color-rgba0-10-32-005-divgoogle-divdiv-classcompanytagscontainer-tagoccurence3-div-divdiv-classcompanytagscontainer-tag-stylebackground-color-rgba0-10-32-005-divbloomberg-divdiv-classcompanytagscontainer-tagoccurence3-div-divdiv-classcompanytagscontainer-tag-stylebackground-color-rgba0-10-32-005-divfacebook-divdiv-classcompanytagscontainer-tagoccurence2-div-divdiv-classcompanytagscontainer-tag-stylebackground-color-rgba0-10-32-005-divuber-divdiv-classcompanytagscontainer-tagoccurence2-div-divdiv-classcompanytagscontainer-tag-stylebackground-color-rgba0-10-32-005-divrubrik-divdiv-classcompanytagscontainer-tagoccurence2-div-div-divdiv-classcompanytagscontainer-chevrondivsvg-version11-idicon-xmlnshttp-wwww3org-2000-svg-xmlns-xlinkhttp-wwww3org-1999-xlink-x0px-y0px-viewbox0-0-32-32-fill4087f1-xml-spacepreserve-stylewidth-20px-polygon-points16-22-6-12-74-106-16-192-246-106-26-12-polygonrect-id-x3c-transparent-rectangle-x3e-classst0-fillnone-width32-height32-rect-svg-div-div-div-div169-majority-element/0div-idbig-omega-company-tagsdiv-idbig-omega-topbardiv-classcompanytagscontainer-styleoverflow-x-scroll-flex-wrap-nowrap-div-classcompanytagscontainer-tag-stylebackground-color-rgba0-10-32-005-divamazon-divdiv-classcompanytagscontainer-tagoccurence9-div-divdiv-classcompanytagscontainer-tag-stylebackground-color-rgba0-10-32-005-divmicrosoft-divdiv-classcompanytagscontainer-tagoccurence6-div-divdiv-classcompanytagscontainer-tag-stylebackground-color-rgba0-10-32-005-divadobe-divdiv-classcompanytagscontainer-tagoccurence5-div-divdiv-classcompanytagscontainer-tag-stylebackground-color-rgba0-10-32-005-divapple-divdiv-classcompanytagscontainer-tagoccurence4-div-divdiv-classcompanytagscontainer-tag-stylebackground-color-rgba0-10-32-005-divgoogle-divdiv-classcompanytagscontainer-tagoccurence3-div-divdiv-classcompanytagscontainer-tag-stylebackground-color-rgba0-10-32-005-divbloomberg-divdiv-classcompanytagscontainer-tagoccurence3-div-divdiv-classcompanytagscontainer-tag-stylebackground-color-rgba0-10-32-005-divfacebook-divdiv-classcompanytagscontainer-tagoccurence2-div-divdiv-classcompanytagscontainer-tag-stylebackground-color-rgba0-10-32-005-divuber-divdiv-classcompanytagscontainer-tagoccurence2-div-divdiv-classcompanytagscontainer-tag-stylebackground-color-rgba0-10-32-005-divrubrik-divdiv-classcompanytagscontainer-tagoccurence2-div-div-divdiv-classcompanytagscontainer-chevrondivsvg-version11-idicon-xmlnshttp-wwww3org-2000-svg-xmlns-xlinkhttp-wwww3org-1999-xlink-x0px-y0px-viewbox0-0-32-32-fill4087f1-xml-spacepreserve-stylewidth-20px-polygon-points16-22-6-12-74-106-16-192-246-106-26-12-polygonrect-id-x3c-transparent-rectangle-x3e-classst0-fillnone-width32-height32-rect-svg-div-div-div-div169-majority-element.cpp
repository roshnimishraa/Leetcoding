class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element;
        int n=nums.size();
        for(int i=0;i<n;i++){
           if(count==0)
           {
               count=1;
               element = nums[i];
           }
        else if(nums[i] == element){
            count++;
        }
   else {
       count--;
   }
}
int count1=0;
for(int i=0;i<n;i++)
{
    if(nums[i] == element) count1++;
    
    if(count1>n/3) return element;
}
        return -1;
    }
};