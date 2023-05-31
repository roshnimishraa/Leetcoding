class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        list<int> l;
        int i=0,j=0;
        int n= nums.size();
        vector<int> ans;
        while(j<n)
        {
    if(l.empty()){
        l.push_back(nums[j]);
    }
            
  else
            {
                while(!l.empty() && l.back()<nums[j])
                    l.pop_back();
                l.push_back(nums[j]);               
            }
            if(j-i+1<k)
            {
                j++;
            }
               
      else if(j-i+1 == k)
        {
//             ans <- calculation
            ans.push_back(l.front());
//             Slide the window
//             remove i 
            if(nums[i] == l.front())
                l.pop_front();
          
            i++;
            j++;

               

        }
        }
        return ans;
    }
};