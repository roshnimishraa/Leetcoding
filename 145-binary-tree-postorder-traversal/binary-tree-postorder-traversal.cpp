class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)  
        return ans;
 stack<TreeNode*> s;
  TreeNode *curr = root;
while(curr != NULL || !s.empty()){
  if(curr != NULL)
  {
     s.push(curr);
    curr = curr->left;
  }
else{
  TreeNode *temp = s.top()->right;
  if(temp == NULL)
  {
   while(!s.empty() && temp == s.top()->right)
   {
 temp = s.top();
 s.pop();
 ans.push_back(temp->val);
 }
 }
  else
  {
 curr = temp;
  }
  }
 }
        return ans;
 }
};
