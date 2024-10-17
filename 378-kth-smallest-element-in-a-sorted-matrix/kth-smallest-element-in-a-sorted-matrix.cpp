class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // min-heap
        priority_queue<int,vector<int>, greater<int>> pq;
int n = matrix.size();
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
        pq.push(matrix[i][j]);
    }
}

int count=0;
while(!pq.empty()){
    int curr = pq.top();
    pq.pop();
    count++;
    if(count == k)
    {
        return curr;
    }
}
return -1;
    }
};