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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
    vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
    if(root == NULL) return ans;
    
        bool leftToRight = true;
    while(!q.empty()){
    int levelSize = q.size();
    vector<int>temp(levelSize);
    
    for(int i=0; i<levelSize; i++){
        TreeNode* frontNode = q.front();
        q.pop();
    
    int index = leftToRight ? i : levelSize - i -1;
        temp[index] = frontNode -> val;
    
    if(frontNode -> left != NULL){
     q.push(frontNode ->left);
    }
    if(frontNode ->right != NULL) {
        q.push(frontNode ->right);
    }

    }
        //     direction change krdo
        leftToRight = !leftToRight;
    ans.push_back(temp);
    }
        return ans;
    }
};