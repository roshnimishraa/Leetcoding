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
    bool helper(TreeNode *root,long min,long max)
    {
        if(root == nullptr){
            return true;
        }
        if(root->val > min && root->val <max){
        bool left = helper(root->left,min,root->val);
        bool right = helper(root->right,root->val,max);
            return left && right;
        }
        else{
            return false;
        }
    }
public:
    bool isValidBST(TreeNode* root) {
    return helper(root,LONG_MIN,LONG_MAX);
        
        
    }
};