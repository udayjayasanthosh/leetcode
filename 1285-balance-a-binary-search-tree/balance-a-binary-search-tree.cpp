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
    void traverse(TreeNode* root)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        if(root->left!=NULL)
        traverse(root->left);
        if(root->right!=NULL)
        traverse(root->right);
    }
    TreeNode* Tree(int start,int end)
    {
        if(end<=start) return NULL;
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=Tree(start,mid);
        root->right=Tree(mid+1,end);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        traverse(root);
        sort(v.begin(),v.end());
        return Tree(0,v.size());
        
    }
};