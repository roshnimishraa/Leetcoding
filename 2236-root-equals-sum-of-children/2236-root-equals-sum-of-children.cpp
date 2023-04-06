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
        if(root == NULL || (root -> left == NULL) && (root->right == NULL))
        {
        return true;    
        }

//         Left Subtree and Right Subtree Sum
        int leftSum =0;
        int rightSum =0;
        
    if(root->left != NULL){
        leftSum = root->left->val;
    }
        if(root->right != NULL){
            rightSum = root->right->val;
        }
        
    bool left = checkTree(root->left);
        bool right = checkTree(root->right);
    
        bool value = root -> val == (leftSum + rightSum);
        
//     check 
        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }
};