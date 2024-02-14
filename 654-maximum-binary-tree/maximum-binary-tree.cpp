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
    TreeNode* construct(vector<int>nums,TreeNode* root,int start,int end)
    {
        if(start > end) return NULL;
        if(start==end)
        {
            root=new TreeNode(nums[start]);
            return root;
        }
        int a=0;
        int j=0;
        for(int i=start;i<=end;i++)
        {
            if(nums[i]>a)
            {
                a=nums[i];
                j=i;
            }
        }
        root=new TreeNode(a);
        root->left=construct(nums,root->left,start,j-1);
        root->right=construct(nums,root->right,j+1,end);
        return root;

    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root=new TreeNode();
        root=construct(nums,root,0,nums.size()-1);
        return root;
    }
};