class Solution {
    
private:
    void dfs(int node,vector<int>adj[], vector<int>&vis)
    {
        vis[node]=1;
        
        
        for(auto it: adj[node])
        {
            if(vis[it]==0)
            {
              
                dfs(it,adj,vis);
                
            }
        }
        
        
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        // vector<int>adj[n+1];
        vector<int>adj[n];
        
        
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<n;j++)
            {
                if(i!=j && isConnected[i][j]==1)
                    
                {
                    adj[i].push_back(j);
                     adj[j].push_back(i);
                }
            }
             
        }
        
        
        int start=0;
        int cnt=0;
        vector<int>vis(n+1,0);
        
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                cnt++;
                dfs(i,adj,vis);
                
            }
        }
        
        
        return cnt;
        
    }
};