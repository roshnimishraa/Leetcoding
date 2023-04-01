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
//         left subtree 
        TreeNode *left = lowestCommonAncestor(root->left,p,q);
// right subtree
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        
//   if I don't found value from left till the end 
        if(left == NULL){
            return right;
        }
 //   if I don't found value from right till the end 
      else if(right == NULL){
            return left;
        }
        
//     if left and right not equal to NULL then we get the ancestor
        // if(left != NULL && right != NULL){
        else{ 
        return root;
        }
      
    }
};