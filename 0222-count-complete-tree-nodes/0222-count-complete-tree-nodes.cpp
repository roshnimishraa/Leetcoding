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
    void helper(TreeNode* root,int &count)
    {
        if(root == NULL) return;
        else
        helper(root->left,count);
        if(root != NULL || root -> left != NULL || root->right != NULL){
            count++;
        }
        helper(root->right,count);
    }
public:
    int countNodes(TreeNode* root) {
        int count =0;
        helper(root,count);
        return count;
    }
};