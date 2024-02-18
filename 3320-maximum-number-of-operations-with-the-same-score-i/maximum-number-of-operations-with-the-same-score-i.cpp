class Solution {
public:
    int maxOperations(vector<int>& nums) {
   int sum = nums[0]+nums[1];
int count=1;
int n = nums.size();
for(int i=2;i<n;i+=2){
if(i+1<n && nums[i]+nums[i+1]==sum){
    count++;
}
else break;
}     
return count;
    }
};