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
    TreeNode* createBinaryTree(vector<vector<int>>& description) {
        unordered_map<int,TreeNode*>mp;
        unordered_set<int>s;
        for(int i=0;i<description.size();i++)
        {
            s.insert(description[i][1]);
            if(mp.find(description[i][0])==mp.end())
            {
                TreeNode* a=new TreeNode(description[i][0]);
                if(mp.find(description[i][1])==mp.end())
                {
                    if(description[i][2]==1)
                    {
                        a->left=new TreeNode(description[i][1]);
                        mp[description[i][1]]=a->left;
                    }
                    else
                    {
                        a->right=new TreeNode(description[i][1]);
                        mp[description[i][1]]=a->right;
                    }
                    
                }
                else
                {
                    if(description[i][2]==1)
                    {
                        a->left=mp[description[i][1]];
                    }
                    else
                    {
                        a->right=mp[description[i][1]];
                    }
                }
                mp[description[i][0]]=a;
            }
            else
            {
                if(mp.find(description[i][1])==mp.end())
                {
                    if(description[i][2]==1)
                    {
                        mp[description[i][0]]->left=new TreeNode(description[i][1]);
                        mp[description[i][1]]=mp[description[i][0]]->left;
                    }
                    else
                    {
                        mp[description[i][0]]->right=new TreeNode(description[i][1]);
                        mp[description[i][1]]=mp[description[i][0]]->right;
                    }
                }
                else
                {
                    if(description[i][2]==1)
                    {
                        mp[description[i][0]]->left=mp[description[i][1]];
                    }
                    else
                    {
                        mp[description[i][0]]->right=mp[description[i][1]];
                    }
                }
            }
        }
        int fin=-1;
        for(auto i:description)
        {
            if(s.find(i[0])==s.end())
            {
                fin=i[0];
                break;
            }
        }
        return mp[fin];
    }
};