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
    bool checkTree(TreeNode* root) {
        if(root == NULL || (root->left == nullptr && root->right == nullptr)){
            return true;
        }
        
//     Sum of left subtree and right subtree
        int leftSum =0;
        int rightSum =0;
 
        if(root -> left != NULL){
            leftSum = root->left->val;
        }
        if(root->right != NULL){
            rightSum = root->right -> val;
        }
        
//     check 
        bool left = checkTree(root->left);
        bool right = checkTree(root->right);
        bool value = root->val == (leftSum + rightSum);
    
    if(left && right && value){
        return true;
    }
        else{
            return false;
        }
    }
};