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
    void fun(TreeNode* root,vector<string>&v,string s)
    {
        if(root==NULL) return;
        s=(char)(97+root->val)+s;
        if(root->left==NULL and root->right==NULL)
        {
            v.push_back(s);
            return;
        }
        if(root->left!=NULL)
        {
            fun(root->left,v,s);
        }
        if(root->right!=NULL)
        {
            fun(root->right,v,s);
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>v;
        string s="";
        fun(root,v,s);
        return *min_element(v.begin(),v.end());
    }
};