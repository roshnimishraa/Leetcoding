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
    bool isSameTree(TreeNode* root,TreeNode* subRoot)
    {
 if(root==NULL && subRoot==NULL)
        {
            return true;
        }
        if(root==NULL || subRoot==NULL)
        {
            return false;
        } 
    else if(root->val == subRoot->val)
    {
        return isSameTree(root->left,subRoot->left)&& 
        isSameTree(root->right,subRoot->right);
    }
    else{
        return false;
    }
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
     if(root==NULL || subRoot==NULL)
        {
            return false;
        }   
    if(isSameTree(root,subRoot)) return root;

    return isSubtree(root->left,subRoot) ||
    isSubtree(root->right,subRoot);
    }
};