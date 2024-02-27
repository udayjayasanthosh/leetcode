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
    vector<int>v;
    int trave(TreeNode* root,int level)
    {
        cout<<level<<"__"<<endl;
        if(root==NULL)return 0;
        if(root->left==NULL and root->right==NULL) return level;
        int a=trave(root->right,level+1);
        int b=trave(root->left,level+1);
        int c=abs(level-a)+abs(level-b);
        cout<<c;
        v.push_back(c);
        return max(a,b);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        if(root->left==NULL && root->right==NULL)return 0;
        int level=0;
        int c=trave(root,level);
        return *max_element(v.begin(),v.end());
    }
};