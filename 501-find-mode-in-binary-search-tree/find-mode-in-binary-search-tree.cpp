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
    void trav(TreeNode* root,map<int,int>&mp,int &highCount)
    {
        if(root==NULL) return;
        int value=mp[root->val]+1;
        mp[root->val]=value;
        highCount=max(highCount,value);
        trav(root->left,mp,highCount);
        trav(root->right,mp,highCount);
    }
    vector<int> findMode(TreeNode* root) {
        int highCount=0;
        map<int,int>mp;
        vector<int>ans;
        trav(root,mp,highCount);
        for(auto i:mp)
        {
            if(i.second==highCount)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};