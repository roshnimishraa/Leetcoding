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
    void solve(TreeNode* root,vector<int> &inorder)
    {
        if(root == NULL) return;
        else{
            solve(root->left,inorder);
    inorder.push_back(root->val);
    solve(root->right,inorder);
        }
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> inorder;
    if(root == NULL) return 0;
    solve(root,inorder);
    int res = INT_MAX;
    for(int i=1;i<inorder.size();i++)
    {
        res = min(res,inorder[i]-inorder[i-1]);
    }
    return res;
    }
};