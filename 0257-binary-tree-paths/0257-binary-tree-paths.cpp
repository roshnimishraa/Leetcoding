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
    void helper(TreeNode* root,vector<string> &ans,string output)
    {
        if(root == NULL){
            return;
        }
        
      if(root->left != NULL || root->right != NULL){
         output += (to_string(root->val)+"->");
      }
        else{
         output += (to_string(root->val));
            ans.push_back(output);
        }
//         recursive call
        helper(root->left,ans,output);
        helper(root->right,ans,output);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string> ans;
        string output= "";
        helper(root,ans,output);
        return ans;
    }
};