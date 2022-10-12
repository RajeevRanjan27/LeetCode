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
//     bool findTarget(TreeNode* root, int k) {
//         vector<int> nums;
//         inorder(root, nums);
//         for(int i = 0, j = nums.size()-1; i<j;){
//             if(nums[i] + nums[j] == k)return true;
//             (nums[i] + nums[j] < k)? i++ : j--;
//         }
//         return false;
//     }
    
//     void inorder(TreeNode* root, vector<int>& nums){
//         if(root == NULL)return;
//         inorder(root->left, nums);
//         nums.push_back(root->val);
//         inorder(root->right, nums);
//     }
    
    
           bool findTarget(TreeNode * root, int k)
           {
               unordered_map<int,bool>mp;
               //if(root->val==k)return true;
               if(root==NULL)return false;
               
              queue<TreeNode *>q;
               q.push(root);
               while(!q.empty())
               {
                   
                  // int size=q.size();
                   TreeNode * node=q.front();
                   q.pop();
                   if(mp[k-node->val]==true)return true;
                   mp[node->val]=true;
                   if(node->left)q.push(node->left);
                   if(node->right)q.push(node->right);
                   
               }
               return false;
               
               
               
           }
    
    
    
};