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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
    while(!q.empty())
    {
        int n= q.size();
bool foundX=false, foundY=false;
while(n--)
{
    TreeNode* curr = q.front();
    q.pop();
    if(curr->val == x)
    {
        foundX = true;
    }
    if(curr->val == y)
    {
        foundY = true;
    }
    if(curr->left!=NULL && curr->right!=NULL)
    {
if((curr->left->val == x && curr->right->val==y) ||
(curr->left->val == y && curr->right->val == x))
{
    return false;
}
 }
if(curr->left!=NULL)
q.push(curr->left);
if(curr->right!=NULL)
q.push(curr->right);
     }
     if(foundX==true && foundY==true)
     return true;
}
return false;
  
    }
};