class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //min heap
    priority_queue<int,vector<int>,greater<int>> pq;
        
//   push elements in priority queue 
    for(int i=0;i<k;i++){
        pq.push(nums[i]);
    }
        
// build min heap  && heap.size() == k
        for(int i=k;i<nums.size();i++){
            if(pq.top() < nums[i]){  //min heap 
               pq.pop();
        //push min 
                pq.push(nums[i]);
            }
        }
      return  pq.top();
    }
};