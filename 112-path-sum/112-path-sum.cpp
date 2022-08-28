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
    vector<int>ans;
    void func(TreeNode* root, int target,int sum)
    {
        if(root==NULL)return;
        sum+=root->val;
        func(root->left,target,sum);
        func(root->right,target,sum);
        if(root->left==NULL && root->right==NULL &&target==sum)
            ans.push_back(sum);
        sum-=root->val;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        int sum=0;
        func(root,targetSum,sum);
        return ans.size();
        
    }
};