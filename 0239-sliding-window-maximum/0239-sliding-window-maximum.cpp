class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;
    for(int i=0;i<n;i++){
   
/* 1. m When new element comes nums[i], make space for it (Window Size can not be greater than K) */
 
    while(!dq.empty()  && dq.front() <= i-k){
        
        dq.pop_front();
    }
        
/*  2. Now, when nums[i] comes there is no need to keep small elements in  that window pop */
        
    while(!dq.empty() && nums[i] > nums[dq.back()]){
        dq.pop_back();
    }
        
//3 now push i in dequeu -> for nums[i]
  dq.push_back(i);
        
//4. if i>= k-1 then deq.front() is the answer for particular k size window  
        if(i>= k-1) {
            ans.push_back(nums[dq.front()]);
        }
    }
        return ans;
    }
};