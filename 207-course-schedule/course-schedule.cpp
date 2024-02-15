class Solution {
public:
    bool canFinish(int N,  vector<vector<int>>& prerequisites)
    {
        vector<int> adj[N];
    for(auto it:prerequisites)
    {
   
   adj[it[0]].push_back(it[1]);
    }
// kahn's algo 
vector<int> indegree(N,0);
for(int i=0;i<N;i++)
{
    for(auto it:adj[i])
    {
    indegree[it]++;
    }
}
queue<int> q;
for(int i=0;i<N;i++)
{
    if(indegree[i]==0){
q.push(i);
    }
}

int count=0;
while(!q.empty()){
    auto node = q.front();
    q.pop();
count++;
for(auto it:adj[node])
{
    indegree[it]--;
    if(indegree[it]==0)
    {
        q.push(it);
    }
}
}
if(count == N) return true;
return false;
    }
};