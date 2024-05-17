/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* solve(vector<int> &v,int left,int right)
    {
        if(left > right) return NULL;
        int mid = left+(right-left)/2;
    TreeNode* node =new TreeNode (v[mid]);
    node->left = solve(v,left,mid-1);
    node->right = solve(v,mid+1,right);
    return node;
    }
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        while(head!=NULL)
        {
            v.push_back(head->val);
           head = head->next;
        }
        return solve(v,0,v.size()-1);

    }
};