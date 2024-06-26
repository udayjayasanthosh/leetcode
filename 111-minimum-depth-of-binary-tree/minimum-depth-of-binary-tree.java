/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int min=Integer.MAX_VALUE;
    void dfs(TreeNode root,int a)
    {
        if(root==null)
        {
            return;
        }
        a++;
        if(root.left==null && root.right==null)
        {
            if(a<min)
            {
            min=a;
            }
            return;
        }
        dfs(root.left,a);
        dfs(root.right,a);
    }
    public int minDepth(TreeNode root) {
        if(root==null) return 0;
        dfs(root,0);
        return min;
    }
}