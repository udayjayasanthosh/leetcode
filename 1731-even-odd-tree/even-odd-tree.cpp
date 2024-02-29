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
    int c=1;
    map<int,int>mp;
    void fun(TreeNode* root,int i)
    {
        if(root==NULL)return;
        if(mp.find(i)==mp.end())
        {
            if(i%2==0)
            {
                if(root->val%2==0)
                {
                    c=0;
                    return;
                }
            }
            else
            {
                if(root->val%2==1)
                {
                    c=0;
                    return;
                }
            }
            mp[i]=root->val;
        }
        else
        {
            if(i%2==0)
            {
                if(mp[i]>=root->val || root->val%2==0)
                {
                    c=0;
                    return;
                }
            }
            else
            {
                if(mp[i]<=root->val || root->val%2==1)
                {
                    c=0;
                    return;
                }
            }
            mp[i]=root->val;
        }
        fun(root->left,i+1);
        fun(root->right,i+1);
    }
    bool isEvenOddTree(TreeNode* root) {
        fun(root,0);
        if(c==1)return true;
        return false;
   }
};