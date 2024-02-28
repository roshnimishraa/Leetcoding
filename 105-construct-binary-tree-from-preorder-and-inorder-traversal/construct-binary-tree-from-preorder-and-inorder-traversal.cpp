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
TreeNode* build(vector<int> &pre,int preStart,int preEnd,vector<int> &in,int inStart,int inEnd, map<int,int> &mp)
{
    if(preStart>preEnd || inStart>inEnd) return NULL;
TreeNode* root = new TreeNode(pre[preStart]);
int index = mp[pre[preStart]];
int len=index-inStart;
root->left = build(pre,preStart+1,preStart+len,in,inStart,index-1,mp);
root->right = build(pre,preStart+len+1,preEnd,in,index+1,inEnd,mp);
return root;
}
public:
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
{
    map<int,int> inMap;
for(int i=0;i<inorder.size();i++)
{
    inMap[inorder[i]]=i;
}
TreeNode* root=build(preorder,0,preorder.size()-1,
inorder,0,inorder.size()-1,inMap);
return root;
}
};