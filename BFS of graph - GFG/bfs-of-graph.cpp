//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    void bfs(int src,vector<int>adj[], vector<int>&vis, vector<int>&ans){
        
        vis[src]=1;
        queue<int>q;
        q.push(src);
        
        while(!q.empty()){
            
            int front=q.front();
            q.pop();
            ans.push_back(front);
            
            for(auto it: adj[front]){
                
                if(!vis[it]){
                    q.push(it);
                    vis[it]=true;
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<int>vis(V);
        vector<int>ans;
        
        // for(int i=0;i<V;i++){
            
        //     if(!vis[i]){
                bfs(0,adj, vis, ans);
        //     }
        // }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends