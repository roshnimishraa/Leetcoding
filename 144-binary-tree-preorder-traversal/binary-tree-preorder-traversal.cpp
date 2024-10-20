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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;
    while(curr != NULL)
    {
        if(curr->left == NULL)
        {
            ans.push_back(curr->val);
            curr = curr->right;
        }
        else{
            TreeNode* leftChild = curr->left;

    while(leftChild->right != NULL && leftChild->right != curr)
    {
        leftChild = leftChild->right;
    }
    if(leftChild->right == NULL){
    leftChild->right = curr;
    ans.push_back(curr->val);
    curr = curr->left;
    }
    else{
        // to avoid revising of nodes 
  leftChild->right = NULL;
  curr = curr->right;
    }
        }
    }
    return ans;
    }
};