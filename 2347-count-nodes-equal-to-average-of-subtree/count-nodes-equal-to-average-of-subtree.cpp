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
    int maxi=0;
    pair<int,int> fun(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<int,int>p;
            p.first=0;
            p.second=0;
            return p;
        }
        if(root->left==NULL and root->right==NULL)
        {
            pair<int,int>p;
            p.first=root->val;
            p.second=1;
            // int help=p.first;
            // if(root->val==maxi)
            // {
            //     maxi=root->val;
            // }
            maxi++;
            return p;
        }
        pair<int,int>a;
        pair<int,int>b;
        a=fun(root->left);
        b=fun(root->right);
        int c=a.first+b.first+root->val;
        int d=a.second+b.second+1;
        if(c/d==root->val)
        maxi++;
        pair<int,int>e;
        e.first=c;
        e.second=d;
        return e;

    }
    int averageOfSubtree(TreeNode* root) {
        pair<int,int>h;
        h=fun(root);
        return maxi;
    }
};