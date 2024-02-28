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
    int h,maxi=-1,b,help,hell;
    void trave(TreeNode* root,int i,int lr)
    {
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL)
        {
           if(i>maxi)
           {
               maxi=i;
               if(lr==0)
               {
                   h=root->val;
                   help=i;
               }
               else
               {
                   b=root->val;
                   hell=i;
               }

           }
        }
        if(root->left!=NULL)
        {
            trave(root->left,i+1,0);
        }
        if(root->right!=NULL)
        {
            trave(root->right,i+1,1);
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        int i=0;
        trave(root,i,0);
        if(help>=hell)return h;
        return b;
    }
};