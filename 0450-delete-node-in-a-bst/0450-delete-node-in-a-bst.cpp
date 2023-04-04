class Solution {
    TreeNode* getSucc(TreeNode* curr){
//         go on right to find greatest value in right subtree
 curr = curr->right ;
// I need to check closet greater value that i found in right left most leaf 
        while(curr!= NULL && curr->left != NULL)
            curr = curr->left;
// curr->left == NULL that means we found closet greater value return curr
        return curr;
    }
public:
    //delete nth node recursion O(H)
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        //base case
        if(root == nullptr){
            return NULL;
        }
        //cases: 1->key node is leaf node
            //   2->key node have only one child
            //   3->key node is parent have 2 childrens
//     SEARCH NODE
        if(root->val > key){
            //move left
            root->left = deleteNode(root->left,key);
        }
        else if(root->val < key){
            //move right
            root->right = deleteNode(root->right,key);
        }
        else{
            //we have found the node which have val as key
            
            //1) if it is leaf node then just remove
            
            if(root->left == nullptr && root->right==nullptr){
                return NULL;
            }
            
            
            // if key node with one child
            else if(root->left == NULL){
             
                    return root->right; 
            }
            else if(root->right == NULL){
                return root->left;
            }
         
            //if key node have 2 children
            else{
// I found closet greater value say it is succ
             TreeNode* succ = getSucc(root);
//                 copying  value nodetobe deleted to succ
                root-> val = succ->val;
 // delete leftmost succ which is in right subtree
//     recursively call to delete in a right subtree
            root -> right = deleteNode(root->right , succ->val);
            }
        }
        return root;
    }
};