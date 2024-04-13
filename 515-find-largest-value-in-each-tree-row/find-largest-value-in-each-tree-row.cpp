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
    map<int,int>mp;
    void trave(TreeNode* root,int i)
    {
        if(root==NULL)return;
        if(mp.find(i)==mp.end())
        mp[i]=root->val;
        else if(mp[i]<root->val)
        {
            mp[i]=root->val;
        }
        if(root->left!=NULL)
        trave(root->left,i+1);
        if(root->right!=NULL)
        trave(root->right,i+1);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>a;
        trave(root,0);
        for(auto i:mp)
        {
            a.push_back(i.second);
        }
        return a;
    }
};