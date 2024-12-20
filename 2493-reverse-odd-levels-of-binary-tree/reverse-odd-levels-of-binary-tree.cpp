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
    void bfs(TreeNode* root,unordered_map<int,vector<int>>&mp,int level)
    {
        if(root==NULL)
        return;
        if(level%2!=0)
        {
            mp[level].push_back(root->val);
        }
        bfs(root->left,mp,level+1);
        bfs(root->right,mp,level+1);
    }
    TreeNode* Tree(TreeNode* root,unordered_map<int,vector<int>>&mp,int level)
    {
        if(root==NULL)
        return NULL;
        if(level%2!=0)
        {
            int len=mp[level].size();
            if(len>0)
            {
                int value=mp[level][len-1];
                mp[level].pop_back();
                TreeNode* a=new TreeNode(value);
                a->left=Tree(root->left,mp,level+1);
                a->right=Tree(root->right,mp,level+1);
                return a;
            }
            else
            {
                return root;
            }
        }
        else
        {
            TreeNode* a=new TreeNode(root->val);
            a->left=Tree(root->left,mp,level+1);
            a->right=Tree(root->right,mp,level+1);
            return a;
        }
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        unordered_map<int,vector<int>>mp;
        bfs(root,mp,0);
        return Tree(root,mp,0);
    }
};