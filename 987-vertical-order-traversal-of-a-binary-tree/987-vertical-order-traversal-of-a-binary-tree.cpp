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
   
    
    // void traverse(Treenode *root,int vertical,int level)
    // {
    //     if(root)
    //     {
    //        todo.push({root,{0,0}});
    //     }
    // }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>> mp;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int sz=q.size();
            map<int,multiset<int>> freq;
            while(sz-->0){
                auto temp=q.front();
                q.pop();
                TreeNode* node=temp.first;
                int col=temp.second;
                freq[col].insert(node->val);
                if(node->left) q.push({node->left,col-1});
                if(node->right) q.push({node->right,col+1});
            }
            for(auto &[key,val]:freq){
                for(auto i:val){
                    mp[key].push_back(i);
                }
            } 
        }
        vector<vector<int>>  ans;
        for(auto &[key,val]:mp){
            ans.push_back(val);
        }
        return ans;
    }
};