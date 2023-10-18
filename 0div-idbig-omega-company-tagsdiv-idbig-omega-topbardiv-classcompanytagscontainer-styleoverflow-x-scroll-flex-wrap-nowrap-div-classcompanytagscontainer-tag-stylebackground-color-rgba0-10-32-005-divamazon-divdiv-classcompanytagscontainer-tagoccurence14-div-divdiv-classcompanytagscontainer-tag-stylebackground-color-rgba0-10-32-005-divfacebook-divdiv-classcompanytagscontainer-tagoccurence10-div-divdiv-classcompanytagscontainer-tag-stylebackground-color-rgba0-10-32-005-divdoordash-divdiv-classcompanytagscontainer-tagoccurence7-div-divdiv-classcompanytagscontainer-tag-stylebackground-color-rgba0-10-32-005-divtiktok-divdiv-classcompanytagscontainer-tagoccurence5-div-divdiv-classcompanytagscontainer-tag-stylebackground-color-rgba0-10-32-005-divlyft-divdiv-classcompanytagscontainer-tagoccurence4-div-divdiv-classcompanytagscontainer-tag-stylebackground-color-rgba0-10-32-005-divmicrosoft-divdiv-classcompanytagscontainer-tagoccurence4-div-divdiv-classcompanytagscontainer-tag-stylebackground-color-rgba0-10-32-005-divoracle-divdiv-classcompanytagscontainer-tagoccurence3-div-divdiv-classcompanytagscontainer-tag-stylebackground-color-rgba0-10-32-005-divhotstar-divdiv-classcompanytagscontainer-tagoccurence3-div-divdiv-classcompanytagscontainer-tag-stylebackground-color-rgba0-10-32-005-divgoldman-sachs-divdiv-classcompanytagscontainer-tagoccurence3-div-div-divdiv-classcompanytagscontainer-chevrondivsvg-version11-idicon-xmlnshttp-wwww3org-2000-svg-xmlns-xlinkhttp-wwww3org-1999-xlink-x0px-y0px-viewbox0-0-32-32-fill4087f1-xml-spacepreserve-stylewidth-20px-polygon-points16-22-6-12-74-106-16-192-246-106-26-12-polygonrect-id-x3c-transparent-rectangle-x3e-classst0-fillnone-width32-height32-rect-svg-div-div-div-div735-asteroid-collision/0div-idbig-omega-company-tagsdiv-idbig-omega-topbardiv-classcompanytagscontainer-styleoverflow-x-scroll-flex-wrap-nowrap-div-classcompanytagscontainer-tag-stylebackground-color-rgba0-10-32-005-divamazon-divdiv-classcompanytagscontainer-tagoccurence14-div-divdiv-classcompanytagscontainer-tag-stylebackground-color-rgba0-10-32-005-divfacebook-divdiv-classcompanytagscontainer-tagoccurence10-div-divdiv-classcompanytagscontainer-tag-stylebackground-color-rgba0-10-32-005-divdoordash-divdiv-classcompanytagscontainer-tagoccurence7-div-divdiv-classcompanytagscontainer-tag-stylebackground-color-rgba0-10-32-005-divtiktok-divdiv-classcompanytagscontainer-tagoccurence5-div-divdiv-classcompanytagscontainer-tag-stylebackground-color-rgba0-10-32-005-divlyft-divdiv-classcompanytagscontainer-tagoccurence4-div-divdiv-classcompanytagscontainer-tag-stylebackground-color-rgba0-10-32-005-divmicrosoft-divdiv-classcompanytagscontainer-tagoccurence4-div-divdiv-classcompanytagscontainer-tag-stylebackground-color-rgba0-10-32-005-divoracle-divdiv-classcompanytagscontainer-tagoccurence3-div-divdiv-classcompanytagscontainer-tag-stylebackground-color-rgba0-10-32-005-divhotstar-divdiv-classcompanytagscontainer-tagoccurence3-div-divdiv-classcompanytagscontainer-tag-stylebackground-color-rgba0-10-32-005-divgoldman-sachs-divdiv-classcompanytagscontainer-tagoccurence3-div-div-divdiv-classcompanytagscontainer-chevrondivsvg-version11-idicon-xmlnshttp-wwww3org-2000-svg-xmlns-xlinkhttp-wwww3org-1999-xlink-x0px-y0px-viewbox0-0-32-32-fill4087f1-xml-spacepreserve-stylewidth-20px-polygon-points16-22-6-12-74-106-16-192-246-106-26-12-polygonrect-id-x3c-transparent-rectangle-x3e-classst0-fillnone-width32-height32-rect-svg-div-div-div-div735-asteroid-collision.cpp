class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int sum=0;
       
        for(auto it : asteroids)
        {
            while(!st.empty() && st.top()>0 && it<0)
            {
                sum = it+st.top();
                
                if(sum < 0){
                    //left side move // pop positive 
            st.pop();
                }
                else if(sum > 0)
                {
                    //right side move // remove negative 
                     it =0;
                    
                }
                else{
                    st.pop();
                    it =0;
                    
                }
            }
            if(it !=0 )
            {
              st.push(it);  
            }
        }
    int size = st.size();
     vector<int> ans(size);
        int i=size-1;
        while(!st.empty())
        {
            ans[i] = st.top();
            st.pop();
            i--;
        }
        return ans;
    }
};