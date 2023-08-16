class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;
          if(n == 0)
            return {}; 
        
    for(int i=0;i<n;i++){
    //1. make space for nums[i] till window size(i-k)
   // jo element push kr rhe h window size me agar uska prev usse small hai 
// deq.front se pop kr do
    while(!dq.empty()  && dq.front() <= i-k){
        
        dq.pop_front();
    }
        
//2. Jo next element agega vo prev wale se big ele to prev ko pop kr dena h
    while(!dq.empty() && nums[i] > nums[dq.back()]){
        dq.pop_back();
    }
//3 push i
  dq.push_back(i);
        
//4. 
        if(i>= k-1) {
            ans.push_back(nums[dq.front()]);
        }
    }
        return ans;
    }
};