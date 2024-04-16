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
    void addon(TreeNode* root, int val, int depth, int temp=2){
        if(root==NULL) return;
        if(temp>depth) return;
        if(temp==depth){
            TreeNode* as=new TreeNode(val);
            TreeNode* ass=new TreeNode(val);
                TreeNode* temp=root->left;
                 TreeNode* temp1=root->right;
                root->left=as;
                as->left=temp;
                root->right=ass;
                ass->right=temp1;
        }
        addon(root->left, val, depth, temp+1);
        addon(root->right,val,depth,temp+1);

    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newd=new TreeNode(val);
            newd->left=root;
            return newd;
        }
        addon(root, val, depth);
        return root;
    }
};