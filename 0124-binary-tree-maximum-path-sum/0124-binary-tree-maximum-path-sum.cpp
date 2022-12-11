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
    int ans=INT_MIN;
    int helper(TreeNode* root)
    {
        if (root==NULL) return 0;
        int a =helper (root->left);
        int b =helper (root->right);
        int sum= INT_MIN;
        sum=max({a+root->val,b+root->val,a+b+root->val,root->val});
        ans=max(ans,sum);
        return max({root->val+a,b+root->val,root->val});
    }
    
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
        
    }
};