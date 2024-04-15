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
    void trave(TreeNode* p,int sum, int& d)
    {
        if(p==NULL) return;
        sum=sum*10+p->val;
        if(p->left==NULL && p->right==NULL) {
             (d+=sum);
              return;
        }
        trave(p->left,sum, d);
        trave(p->right,sum, d);
    }
    int sumNumbers(TreeNode* root) {
         int d = 0;
        trave(root,0, d);
        return d;
    }
};