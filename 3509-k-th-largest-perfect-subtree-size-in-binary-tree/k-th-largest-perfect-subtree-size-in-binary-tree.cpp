/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 
class Solution {
    private:
    int dfs(TreeNode* root, int k,  priority_queue<int,vector<int>,greater<int>> &pq)
    {
        if(root == NULL) return 0; //base case
    int l = dfs(root->left, k, pq);
    int r = dfs(root->right, k,pq);

// if subtree is not perfect or their sizes are different
if(l == -1 || r == -1 || l != r)
{
    return -1;
}
pq.push(1 + l + r); //sizes 

// maintain a min-heap of size k
while(pq.size() > k) pq.pop();

return 1 + l + r;
    }
public:
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        // min-heap
    priority_queue<int,vector<int>,greater<int>> pq;
        dfs(root, k, pq);
if(pq.size() < k) 
return -1;
return pq.top();
    }
};