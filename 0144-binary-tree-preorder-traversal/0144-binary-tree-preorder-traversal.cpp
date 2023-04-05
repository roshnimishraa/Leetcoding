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
    void helper(TreeNode* root,vector<int> &node)
    {
        if(root == NULL)  return;
        node.push_back(root->val);
        helper(root->left,node);
        helper(root->right,node);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>node;
        helper(root,node);
        return node;
    }
};