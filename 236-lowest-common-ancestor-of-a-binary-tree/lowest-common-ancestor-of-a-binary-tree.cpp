/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int trav(TreeNode* root,TreeNode* p,TreeNode *q,TreeNode*& ans)
    {
        if (root == NULL) return 0;

        int left = trav(root->left, p, q, ans);  
        int right = trav(root->right, p, q, ans);

        int mid = (root->val == p->val || root->val == q->val) ? 1 : 0;

        if (mid + left + right >= 2) {
            ans = root;
        }

        return (mid + left + right > 0) ? 1 : 0;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=NULL;
        trav(root,p,q,ans);
        return ans;
    }
};