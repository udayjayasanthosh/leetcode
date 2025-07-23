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
    int Trav(TreeNode* root,int &ans)
    {
        if(root==NULL) return 0;
        int left=Trav(root->left,ans);
        int right=Trav(root->right,ans);
        if(left<0) left=0;
        if(right<0) right=0;
        int value=left+right+root->val;
        if(value>ans)
        {
            ans=value;
        }
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        Trav(root,ans);
        return ans;
    }
};