/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q){
            return root;
        }
      TreeNode *left = lowestCommonAncestor(root->left,p,q);
     TreeNode *right = lowestCommonAncestor(root->right,p,q);
    
//     if I reached till the end left
        if(left == NULL){
            return right;
        }
//  If i reached till the end Right
        if(right == NULL){
            return left;
        }
// if left and right are not equal then we get Ancestor
        if(left != NULL && right != NULL){
            return root;
        }
        return root;
    }
};