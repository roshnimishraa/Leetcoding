class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
if(n == k) return nums;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
for(int i=0;i<n;i++){
    pq.push({nums[i],i});

if(pq.size() > k) pq.pop();
}
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq1;
while(!pq.empty())
{
    pq1.push({pq.top().second,pq.top().first});
    pq.pop();
}
while(!pq1.empty()){
    ans.push_back(pq1.top().second);
    pq1.pop();
}
return ans;
    }
};