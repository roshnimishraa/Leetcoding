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
//         store final result
        vector<vector<int>> ans;
// storing in queue data structure
        queue<TreeNode*> q;
        q.push(root);

        if(root == NULL) {
            return ans;
        }
// Traversing
    bool leftToRight = true;

while(!q.empty()){
    
    int levelSize = q.size();

//     temp array to store level element
    vector<int> temp(levelSize);
 
// Level process
    for(int i=0;i<levelSize; i++){

 TreeNode* frontNode = q.front();
        q.pop();

// Normal or Reverse Traverse
    
      int index = leftToRight ?  i : levelSize-i-1 ;
        temp[index] = frontNode -> val;
   
    
if(frontNode -> left != NULL){
    q.push(frontNode->left);
}
    if(frontNode -> right != NULL){
        q.push(frontNode -> right);
    }
  }
//     change direction
    leftToRight = !leftToRight;
     ans.push_back(temp);
    
}
       
return ans;
}
};