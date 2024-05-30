class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
    int n = arr.size();
for(int i=0;i<n;i++)
{
    pq.push({abs(arr[i]-x),arr[i]});
    if(pq.size()>k){
        pq.pop();
    }
}
vector<int> ans;
while(pq.size()>0){
    ans.push_back(pq.top().second);
    pq.pop();
}
sort(ans.begin(),ans.end());
return ans;
    }
};