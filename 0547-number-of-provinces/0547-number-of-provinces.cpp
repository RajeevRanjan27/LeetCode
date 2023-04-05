class Solution {
    
private:
    void dfs(int node,vector<vector<int>>isConnected, vector<int>&vis)
    {
        vis[node]=1;
        
        for(int i=0;i<isConnected.size();i++)
        {
            if(vis[i]==0 && isConnected[node][i]==1)
            {
              
                dfs(i,isConnected,vis);
                
            }
        }
        
        
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        // vector<int>adj[n+1];
//         vector<int>adj[n];
        
        
//         for(int i=0;i<n;i++)
//         {
            
//             for(int j=0;j<n;j++)
//             {
//                 if(i!=j && isConnected[i][j]==1)
                    
//                 {
//                     adj[i].push_back(j);
//                      adj[j].push_back(i);
//                 }
//             }
             
//         }
        
       
        
        if (n==0) return 0;
        
        
         int cnt=0;
        vector<int>vis(n+1,0);
        
        
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                cnt++;
                dfs(i,isConnected,vis);
                
            }
        }
        
        
        return cnt;
        
    }
};