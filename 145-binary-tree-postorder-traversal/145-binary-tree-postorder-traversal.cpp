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
    // void postorder(TreeNode * root, vector<int>&v)
    // {
    //     if(root==NULL)return ;
    //     postorder(root->left,v);
    //     postorder(root->right,v);
    //     v.push_back(root->val);
    // }
    // vector<int> postorderTraversal(TreeNode* root) {
    //     vector<int>v;
    //     postorder(root,v);
    //     return v;
//  vector<int> postorderTraversal(TreeNode* root) {
//         vector<int>post;
//         stack<TreeNode*>st;
//         TreeNode * curr=root;
//         while(curr!=NULL||!st.empty())
//         {
//             if(curr!=NULL)
//             {
//                 st.push(curr);
//                 curr=curr->left;
                
//             }
//             else
//             {
//               TreeNode* temp=st.top()->right;
//                 if(temp==NULL)
//                 {
//                     temp=st.top();
//                     st.pop();
//                     post.push_back(temp->val);
//                     while(!st.empty() && temp==st.top()->right)
//                     {
//                         temp=st.top();st.pop();
//                         post.push_back(temp->val);
//                     }
//                 }
//                 else 
//                 {
//                     curr=temp;
//                 }
    
//             }
//         }
//         return post;
    
    
     vector<int> postorderTraversal(TreeNode* root) {
         vector<int>post;
         if(root==NULL)return post;
         stack<TreeNode *>s;
         s.push(root);
         while(!s.empty())
         {
             TreeNode* node=s.top();
             s.pop();
             post.push_back(node->val);
             if(node->left)s.push(node->left);
             if(node->right)s.push(node->right);
             
         }
         reverse(post.begin(),post.end());
         return post;
        
        
        
        
        
        
    }
};