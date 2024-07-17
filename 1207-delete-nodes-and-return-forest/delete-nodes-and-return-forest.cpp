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
    vector<TreeNode*>v;
    void search(vector<int>&to_delete,int &j,int &size)
    {
        if(j>=size) return;
        for(int i=0;i<v.size();i++)
        {
            int z=0;
            v[i]=find(to_delete[j],v[i],z);
            if(z==1)
            {
                if(v[i]==NULL)
                {
                    v.erase(v.begin()+i);
                }
                j+=1;
                search(to_delete,j,size);
                break;
            }
        }
        return;
    }
    TreeNode* find(int &a,TreeNode* root,int &z)
    {
        if(root==NULL)
        return NULL;
        if(root->val==a)
        {
            if(root->left!=NULL)
            {
                v.push_back(root->left);
            }
            if(root->right!=NULL)
            {
                v.push_back(root->right);
            }
            root=NULL;
            z=1;
            return NULL;
        }
         if(root->left!=NULL)
        {
           root->left=find(a,root->left,z);
        }
         if(root->right!=NULL)
        {
            root->right=find(a,root->right,z);
        }
        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        v.push_back(root);
        int j=0;
        int size=to_delete.size();
        search(to_delete,j,size);
        return v;
    }
};