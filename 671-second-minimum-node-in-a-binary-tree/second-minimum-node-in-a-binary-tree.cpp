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
    void solve(TreeNode* root,int &value,long long &ans)
    {
    if(root == NULL) return;
if(root->val!=value && root->val<ans)
ans =root->val;
solve(root->left,value,ans);
solve(root->right,value,ans);
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        long long ans = LONG_MAX;
        int value = root->val;
    solve(root,value,ans);
    return ans!=LONG_MAX ? ans : -1;
    }
};