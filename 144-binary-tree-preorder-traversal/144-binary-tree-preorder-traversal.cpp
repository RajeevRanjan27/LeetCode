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
//     void preorder(TreeNode* root, vector<int>&v)
//     {
          
//         // vector<int>v;
//         if(root==NULL)return;
       
//         TreeNode* node=root;
//         v.push_back(node->val);
//         preorder(node->left,v);
//         preorder(node->right,v);
        
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
      
//         vector<int>v;
//         preorder(root,v);
//         return v;
        
    
     vector<int> preorderTraversal(TreeNode* root) {
         vector<int>ans;
         if(root==NULL)return ans;
         stack<TreeNode *>st;
         st.push(root);
         while(st.size())
         {
             TreeNode * node=st.top();
             st.pop();
             ans.push_back(node->val);
             if(node->right)st.push(node->right);
             if(node->left)st.push(node->left);
         }
         return ans;
         
        
    }
};