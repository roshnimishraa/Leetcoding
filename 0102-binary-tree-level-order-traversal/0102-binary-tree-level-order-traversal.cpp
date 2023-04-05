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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root); 
        
        
        if(root == NULL){
        return ans;
    }
        
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            
        if(size == 0){
            return ans;
        }
            while(size > 0){
                TreeNode *curr = q.front();
                q.pop();
            temp.push_back(curr->val);
            
            if(curr ->left != NULL){
                q.push(curr->left);
            }
            if(curr -> right != NULL){
                q.push(curr -> right);
            }
                size--;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};