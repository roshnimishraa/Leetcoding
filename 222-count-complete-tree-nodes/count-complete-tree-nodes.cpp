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
int leftHeight(TreeNode* root)
{
int height=0;
while(root!=NULL)
{
    height++;
    root = root->left;
}
return height;
}
int rightHeight(TreeNode* root)
{
int height=0;
while(root != NULL)
{
    height++;
    root = root->right;
}
return height;
}
public:
    int countNodes(TreeNode* root) {
  int lh = leftHeight(root);
  int rh = rightHeight(root);
// complete tree 
if(lh == rh) 
// no. of nodes 2^h-1
return (1<<lh)-1; //return pow(2,lh)-1

return 1+countNodes(root->left)+countNodes(root->right);
    }
};