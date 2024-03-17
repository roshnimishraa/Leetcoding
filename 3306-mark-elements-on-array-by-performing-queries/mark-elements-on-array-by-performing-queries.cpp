class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        long long sum=0;
        int n = nums.size();
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
for(int i=0;i<n;i++)
{
    pq.push({nums[i],i});
    sum+=nums[i];
}
vector<long long> ans;
vector<bool> vis(n,false);
for(vector<int> &q:queries)
{
    int ind = q[0];
    int k=q[1];
if(!vis[ind])
{
    vis[ind]=true;
    sum -= nums[ind];
}
while(k && !pq.empty())
{
    pair<int,int> min_ele = pq.top();
    pq.pop();
    if(!vis[min_ele.second]){
        vis[min_ele.second]=true;
        sum -= nums[min_ele.second];
    k--;
    }
}
ans.push_back(sum);
}
return ans;
    }
};