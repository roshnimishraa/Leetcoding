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
    string getSubTreeString(TreeNode* root, unordered_map<string,int> &ump,   vector<TreeNode*> &res)
    {
        if(root == NULL) {
            return "N";
        }
 string s = to_string(root->val) + "," +  getSubTreeString(root->left,ump,res) + "," + getSubTreeString(root->right,ump,res);
        
    if(ump[s] == 1){
        res.push_back(root);
    }
        ump[s]++;
        return s;
    }
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
            vector<TreeNode*> res;
     unordered_map<string,int> ump;
        getSubTreeString(root,ump,res);
        return res;
    }
};