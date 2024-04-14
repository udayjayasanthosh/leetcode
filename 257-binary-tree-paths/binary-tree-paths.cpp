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
    void fun(TreeNode* root,string s,vector<string>&a)
    {
        if(root==NULL)return;
        if(s.size()==0)
        {
            s+=to_string(root->val);
        }
        else
        {
            s=s+"->"+to_string(root->val);
        }
        if(root->right==NULL and root->left==NULL) 
        {
            a.push_back(s);
            return;
        }
        if(root->left!=NULL)
        fun(root->left,s,a);
        if(root->right!=NULL)
        fun(root->right,s,a);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)return {""};
        vector<string>v;
        fun(root,"",v);
        return v;

        
    }
};