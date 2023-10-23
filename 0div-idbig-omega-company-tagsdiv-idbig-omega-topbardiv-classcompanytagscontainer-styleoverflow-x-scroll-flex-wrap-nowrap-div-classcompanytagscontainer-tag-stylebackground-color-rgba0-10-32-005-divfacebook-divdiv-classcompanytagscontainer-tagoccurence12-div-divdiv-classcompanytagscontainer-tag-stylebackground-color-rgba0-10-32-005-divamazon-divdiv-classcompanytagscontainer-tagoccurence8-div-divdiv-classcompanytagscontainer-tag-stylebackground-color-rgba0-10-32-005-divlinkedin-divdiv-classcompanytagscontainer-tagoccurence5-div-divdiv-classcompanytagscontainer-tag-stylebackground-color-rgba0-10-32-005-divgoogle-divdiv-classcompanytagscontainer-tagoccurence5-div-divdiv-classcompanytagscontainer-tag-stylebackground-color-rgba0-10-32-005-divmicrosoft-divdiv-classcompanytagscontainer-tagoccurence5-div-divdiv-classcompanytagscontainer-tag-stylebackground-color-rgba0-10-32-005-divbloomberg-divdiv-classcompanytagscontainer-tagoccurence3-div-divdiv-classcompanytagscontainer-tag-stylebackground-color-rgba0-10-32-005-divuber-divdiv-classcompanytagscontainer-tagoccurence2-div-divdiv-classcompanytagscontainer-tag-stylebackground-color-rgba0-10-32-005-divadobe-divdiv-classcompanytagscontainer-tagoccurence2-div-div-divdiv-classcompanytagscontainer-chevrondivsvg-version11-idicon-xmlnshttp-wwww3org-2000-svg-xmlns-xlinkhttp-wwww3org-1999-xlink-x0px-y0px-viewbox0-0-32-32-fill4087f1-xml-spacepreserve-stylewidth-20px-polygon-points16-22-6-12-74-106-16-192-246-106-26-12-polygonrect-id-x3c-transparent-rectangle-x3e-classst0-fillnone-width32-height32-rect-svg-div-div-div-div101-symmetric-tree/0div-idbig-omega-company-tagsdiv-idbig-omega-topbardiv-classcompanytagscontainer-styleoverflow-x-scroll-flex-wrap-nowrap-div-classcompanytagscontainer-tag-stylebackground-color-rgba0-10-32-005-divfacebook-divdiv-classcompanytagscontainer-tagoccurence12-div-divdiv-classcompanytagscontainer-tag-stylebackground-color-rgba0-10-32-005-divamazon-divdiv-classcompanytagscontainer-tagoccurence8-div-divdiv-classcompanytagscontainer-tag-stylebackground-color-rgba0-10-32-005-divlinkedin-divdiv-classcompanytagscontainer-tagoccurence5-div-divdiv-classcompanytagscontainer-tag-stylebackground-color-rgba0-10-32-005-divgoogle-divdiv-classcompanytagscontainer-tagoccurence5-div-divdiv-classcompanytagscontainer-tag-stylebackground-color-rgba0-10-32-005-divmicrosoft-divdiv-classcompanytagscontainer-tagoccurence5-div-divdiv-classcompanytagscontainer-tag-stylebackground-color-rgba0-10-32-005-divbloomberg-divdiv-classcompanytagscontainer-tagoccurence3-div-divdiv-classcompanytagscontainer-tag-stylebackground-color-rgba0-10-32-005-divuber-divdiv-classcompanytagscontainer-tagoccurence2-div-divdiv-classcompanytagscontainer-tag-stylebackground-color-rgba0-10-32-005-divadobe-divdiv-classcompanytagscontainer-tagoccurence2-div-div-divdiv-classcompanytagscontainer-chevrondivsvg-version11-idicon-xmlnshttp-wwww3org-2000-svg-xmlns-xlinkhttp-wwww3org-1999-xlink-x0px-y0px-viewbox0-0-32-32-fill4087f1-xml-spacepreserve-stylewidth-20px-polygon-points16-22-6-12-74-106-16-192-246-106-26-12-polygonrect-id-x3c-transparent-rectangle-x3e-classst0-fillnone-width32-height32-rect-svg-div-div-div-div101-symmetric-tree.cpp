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
bool helper(TreeNode* left,TreeNode* right)
{

if(left == NULL && right == NULL) {
    return true;
}
if(left == NULL || right == NULL){
    return false;
}
if(left->val != right -> val){
    return false;
}    
    
//comparing left subtree's left child with right subtree's right child --//AND-- comparing left subtree's right child with right subtree's
//left child
return helper(left->left,right->right) && helper(left->right,right->left);
}
    bool isSymmetric(TreeNode* root) {
    return (root == NULL || helper(root->left,root->right));
    }
};