class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
    // base case 
    if(root == NULL){
        return ans;
    }
        queue<TreeNode*>q;
        q.push(root);
    while(!q.empty())
{
  vector<int>temp;
    int size = q.size();
  if(size == 0){
      return ans;
  }
  while(size>0){
       TreeNode* curr= q.front();
  q.pop();
  temp.push_back(curr->val);
      if(curr->left != NULL){
          q.push(curr->left);
      }
      if(curr->right != NULL){
          q.push(curr->right);
      }
      size--;
  }
ans.push_back(temp);
}
return ans;
    }
};