class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end());
        int n = tasks.size();
        
        int m = processorTime.size();
        int ans=0;
        
        int j =n-1;
        for(int i=0;i<m;i++)
        {
            int count=0;
            while(count < 4)
            {
                ans = max(ans,processorTime[i]+tasks[j]);
                count++;
                j--;
            }
        }
        return ans;
    }
};