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
    void func(TreeNode* p,vector<int>&a)
    {
        if(p==NULL)return;
        func(p->left,a);
        func(p->right,a);
        a.push_back(p->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>a;
        func(root,a);
        return a;
    }
};