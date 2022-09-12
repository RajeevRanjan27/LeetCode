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
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
//         if(root->left==NULL && root->right==NULL)return 1;
        
//         if(root->left==NULL)return minDepth(root->right)+1;
//         if(root->right==NULL) return minDepth(root->left)+1;

        int lh=minDepth(root->left);
        int rh=minDepth(root->right);
        
        if(root->left==NULL)return 1+rh;
        if(root->right==NULL)return 1+lh;
        
        
        

        return 1+min(lh,rh);
        
        
//         if(root==NULL)return 0;
        
//         queue<TreeNode*>q;
//         q.push(root);
//         int ans=1;
//         while(!q.empty())
//         {
        
//             int sz=q.size();
//             for(int i=0;i<sz;i++)
//             {
//                 TreeNode * node=q.front();
//                 q.pop();
//                 if(node->left==NULL && node->right==NULL)return ans;
//                 if(node->left!=NULL)q.push(node->left);
//                 if(node->right!=NULL)q.push(node->right);
                
                
//             }
//             ans++;
            
//         }
//         return ans;
        
           
//         if(root==NULL)return 0;
//         int lh=minDepth(root->left);
//         int rh=minDepth(root->right);
//         if(lh==0||rh==0)return 1;
        
//         return 1+ min(lh,rh);
        
    }
};