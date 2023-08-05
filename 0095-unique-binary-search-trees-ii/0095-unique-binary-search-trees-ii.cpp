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
    vector<TreeNode*> helper(int start,int end){
        vector<TreeNode*> ans;
        
        //base case 
        if(start > end)
        {
ans.push_back(NULL);
            return ans;
        }
    
    for(int i=start;i<=end;i++){
        
        vector<TreeNode*> leftSubTree=helper(start,i-1);
        vector<TreeNode*> rightSubTree=helper(i+1,end);
        
    for(auto l: leftSubTree){
        for(auto r:rightSubTree){
        TreeNode *root = new TreeNode(i);
            root->left = l;
            root->right = r;
            ans.push_back(root);
        }
    }
    }
        return ans;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
       return helper(1,n);
    }
};