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
    void fun(TreeNode* root,int&sum,int c)
    {
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL)
        {
            if(c==0)
            sum+=root->val;
            return;
        }
        if(root->left!=NULL)
        {
            fun(root->left,sum,0);
        }
        if(root->right!=NULL)
        {
            fun(root->right,sum,1);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        fun(root,sum,-1);
        return sum;
    }
};