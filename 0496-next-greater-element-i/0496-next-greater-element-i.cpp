class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>umap;
        stack<int> st;
    int n = nums2.size();
//   storing nextgr element of nums2 in stack
// traversing from last 
       for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
   }
            
            int nextGr = (st.empty()) ? -1 : st.top();
            umap.insert({nums2[i] , nextGr});
        
//             push into stack 
            st.push(nums2[i]);
        }
        vector<int> ans;
//         iterating in map
        for(auto x: nums1 ){
            ans.push_back(umap[x]);
        }
        return ans;
    }
};