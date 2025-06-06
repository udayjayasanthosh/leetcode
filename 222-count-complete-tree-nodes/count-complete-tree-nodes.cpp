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
    void counting(TreeNode* root,int &count)
    {
        if(root==NULL) return;
        count+=1;
        if(root->left!=NULL)
        counting(root->left,count);
        if(root->right!=NULL)
        counting(root->right,count);
    }
    int countNodes(TreeNode* root) {
        int count=0;
        counting(root,count);
        return count;
    }
};