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

 class BSTIterator{
    private:
    stack<TreeNode*> myStack;
    bool reverse = true;
    public:
    BSTIterator(TreeNode* root, bool isReverse)
    {
        reverse = isReverse;
        pushAll(root);
    }
    bool hasNext(){
        return !myStack.empty();
    }
    int next(){
        TreeNode* temp = myStack.top();
        myStack.pop();
        if(reverse){
            pushAll(temp->left);
        }
        else{
            pushAll(temp->right);
        }

return temp->val;
 }

 private:
 void pushAll(TreeNode* node){
    while(node != NULL){
        myStack.push(node);
        if(reverse){
            node = node->right;
        }
        else{
            node = node->left;
        }
    }
 }
 };
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;

        BSTIterator l(root, false);
        BSTIterator r(root, true);

        int i= l.next();
        int j= r.next();

        while(i<j){
            if(i+j == k){
                return true;
            }
            else if(i+j > k){
                j = r.next();
            }
            else{
                i = l.next();
            }
        }
        return false;
    }
};