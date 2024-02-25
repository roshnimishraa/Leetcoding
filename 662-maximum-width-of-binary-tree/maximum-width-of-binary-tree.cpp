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
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        long long ans = 0;
// {node,index}
queue<pair<TreeNode*,long long>> q;
q.push({root,0});
while(!q.empty())
{
long long size = q.size();
// choose min index : to make index starting from zero
// to reduce overflow condition 
long long mini = q.front().second;
// width = lastIndex-firstIndex + 1
long long first,last;
for(int i=0;i<size;i++)
{
    // to make idx start 1 at each idx 
    // for left child 2*i+1 and right child
long long curr_id = q.front().second-mini;
TreeNode* node = q.front().first;
q.pop();

if(i == 0) {
    first = curr_id;
}
if(i == size-1){
    last = curr_id;
}
if(node->left != NULL)
{
    q.push({node->left,2*curr_id+1});
}
if(node->right != NULL){
    q.push({node->right,2*curr_id+2});
}
}
ans = max(ans,last-first+1);
}
return ans;
    }
};