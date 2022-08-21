/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
       vector<vector<int>>res;
        
        if(root==NULL)return res;
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>level;
            for(int i=0;i<sz;i++)
            {
                Node * node=q.front();
                q.pop();
                level.push_back(node->val);
                for(auto child:node->children)
                {
                    q.push(child);
                }
                
                
            }
            res.push_back(level);
            
        }
        return res;
        
    }
};