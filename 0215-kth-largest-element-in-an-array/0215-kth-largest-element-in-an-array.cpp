class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //min-heap
      priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i=0;i<k;i++){
        pq.push(nums[i]);
    }

//      build min -heap
   for(int i=k;i<nums.size();i++){
 if(pq.top() < nums[i]) {
pq.pop();
   pq.push(nums[i]);
 }
   }
// lagest[i] = nums[k]
  return pq.top();
    }
};