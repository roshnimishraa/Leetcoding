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
    int maxPathDown(TreeNode *root,int &maxi)
    {
        if(root == NULL) return 0;

//if -ve path sum get from left and right make it 0 
        int left = max(0,maxPathDown(root->left,maxi));
        int right = max(0,maxPathDown(root->right,maxi));
        
        maxi= max(maxi,left+right+root->val);
    return max(left,right)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPathDown(root,maxi);
        return maxi;
    }
};