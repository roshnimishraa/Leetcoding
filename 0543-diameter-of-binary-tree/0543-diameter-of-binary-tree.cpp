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
    int helper(TreeNode* root, int &diameter){
// base case 
       if(root == NULL) return 0;
    int left = helper(root->left,diameter);
        int right = helper(root->right,diameter);
        
    diameter = max(diameter,(left+right));
//     maximum height
        return max(left,right) +1;
    
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
int diameter =0;
        helper(root,diameter);
        return diameter;
    }
};