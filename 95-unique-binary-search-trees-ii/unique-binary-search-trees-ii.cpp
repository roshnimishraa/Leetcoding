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
    private:
vector<TreeNode*> helper(int start,int end)
{
    vector<TreeNode*> result;
 if(start > end)
 {
     return {NULL};
 }
 if(start == end)
 {
    TreeNode* root = new TreeNode(start);
     return {root};
 }
 for(int i=start;i<=end;i++)
 {
    //  Left BST
vector<TreeNode*> left = helper(start,i-1);
// Right BST 
vector<TreeNode*> right = helper(i+1,end);
for(TreeNode* leftRoot :left)
{
    for(TreeNode* rightRoot:right)
    {
    TreeNode* root = new TreeNode(i);
root->left =leftRoot;
root->right =rightRoot;
result.push_back(root);
    }
}
 }
 return result;
}
public:
    vector<TreeNode*> generateTrees(int n) {
    return helper(1,n);
    }
};