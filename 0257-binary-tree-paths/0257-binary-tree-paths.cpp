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
    void helper(TreeNode* root,string output,vector<string> &ans){
        if(root == NULL) return;

    if(root->left != NULL || root->right != NULL ){
          output += (to_string(root->val)+"->");
    }
    else{
        output += (to_string(root->val));
        ans.push_back(output);
    }
 helper(root->left , output,ans);
    helper(root->right,output,ans);
}
public:
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string>ans;
        string output = "";
        
        helper(root,output,ans);
        return ans;
    }
};