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
    vector<vector<int>>ans;
    vector<int>sasta;
    
    void func(TreeNode *root,int targetSum,int sum)
    {
        if(root==NULL)return ;
        sum+=root->val;
        sasta.push_back(root->val);
        func(root->left,targetSum,sum);
        func(root->right,targetSum,sum);
        if(sum==targetSum && root->left==NULL&& root->right==NULL)
             ans.push_back(sasta);
        sum-=root->val;
        sasta.pop_back();
        
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       int sum=0;
        
        func(root,targetSum,sum);
        return ans;
        
        
    }
};