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
    void traversing(TreeNode* root,int i,map<int,vector<int>>&mp)
    {
        if(root==NULL) return;
        mp[i].push_back(root->val);
        traversing(root->left,i+1,mp);
        traversing(root->right,i+1,mp);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        map<int,vector<int>>mp;
        vector<vector<int>>v;
        traversing(root,0,mp);
        for(auto i:mp)
        {
            if(i.first%2==0)
            {
                v.push_back(i.second);
            }
            else
            {
                vector<int>val=i.second;
                reverse(val.begin(),val.end());
                v.push_back(val);
            }
        }
        return v;
    }
};