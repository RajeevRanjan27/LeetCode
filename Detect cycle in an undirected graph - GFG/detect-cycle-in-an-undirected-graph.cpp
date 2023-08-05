//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    
    bool iscycledfs(int node, int parent, vector<int> adj[], unordered_map<int,bool>&vis){
        
        vis[node]=true;
        
        for(auto it:adj[node]){
            if(!vis[it]){
                if(iscycledfs(it,node,adj,vis))return true;
            }
            else if(it!=parent){
                return true;
            }
        }
        return false;
        
    }
    
    
    
    bool iscyclebfs(int src, vector<int>adj[], unordered_map<int,bool>&vis){
        unordered_map<int,int>parent;
        
        
            parent[src]=-1;
            queue<int>q;
            q.push(src);
            vis[src]=true;
            
            while(!q.empty()){
                int front= q.front();
                q.pop();
                
                
                for(auto it: adj[front]){
                    if(vis[it]&& it!=parent[front])return true;
                    
                    else if(!vis[it]){
                        vis[it]=true;
                        q.push(it);
                        parent[it]=front;
                    }
                }
            }
            return false;
            
    }
    bool isCycle(int V, vector<int> adj[]) {
        
        
        unordered_map<int,bool>vis;
        
        
        for(int i=0;i<V;i++){
            
            if(!vis[i]){
                // if(iscycledfs(i,-1,adj,vis))return true;
                if(iscyclebfs(i,adj,vis))return true;
            }
        }
        
        return false;
        
        
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends