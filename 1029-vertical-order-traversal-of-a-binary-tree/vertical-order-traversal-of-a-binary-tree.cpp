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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    // to store vertical orders 
// in map store vertical,For every level there can 
// be multiple nodes so use multiset as there can be 
// duplicate nodes and for sorting 
map<int,map<int,multiset<int>>> mp;
// store {node,{vertical,level}} in queue
queue<pair<TreeNode*,pair<int,int>>> q;
q.push({root,{0,0}});
while(!q.empty())
{
auto p =q.front();
q.pop();
TreeNode* node = p.first;
int vertical = p.second.first;
int level = p.second.second;
mp[vertical][level].insert(node->val);
if(node->left != NULL)
{
 q.push({node->left,{vertical-1,level+1}});
}
if(node->right != NULL)
{
q.push({node->right,{vertical+1,level+1}});
}
}
vector<vector<int>> ans;
for(auto it : mp)
{
    vector<int> col;
for(auto x:it.second)
{
col.insert(col.end(),x.second.begin(),x.second.end());
}
ans.push_back(col);
}
return ans;
    }
};