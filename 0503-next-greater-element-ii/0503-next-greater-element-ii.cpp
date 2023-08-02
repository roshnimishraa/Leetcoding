class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        st.push(nums[n-1]);
        vector<int> nextGr(n);
        nextGr[n-1] = -1;
        
   for(int i=2*n-1;i>=0;i--)
    {
while(!st.empty() && st.top() <= nums[i%n]){
    st.pop();
}
      
       if(i<n){
             if(st.empty()){
            nextGr[i] = -1;
        }
        else{
            nextGr[i] = st.top();
        }
       }
        st.push(nums[i%n]);
    }
        return nextGr;
    }
};