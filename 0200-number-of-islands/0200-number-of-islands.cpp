class Solution {
private :
    void bfs(int row, int col, vector<vector<int>>&visited, vector<vector<char>>grid)

{
    
    visited[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    
    while(!q.empty())
    {
        
        
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        
        
        
        
        for(int delrow=-1;delrow<=1;delrow++)
        {
            for(int delcol=-1;delcol<=1;delcol++)
            {
                
                
            if(delrow==0 && delcol==1 || delrow==0 && delcol==-1 || delrow==-1 && delcol==0 ||delrow==1 && delcol==0){
               int  drow= row+delrow;
               int  dcol= col+delcol;
                
                
                
                if(drow>=0 && drow<grid.size() && dcol>=0 && dcol<grid[0].size() && !visited[drow][dcol] && grid[drow][dcol]=='1' ){
                    
                    visited[drow][dcol]=1;
                    q.push({drow,dcol});
                }
                    }
            }
        }
    }
    
    
    
    
    
    
}
    
    
public:
    
    int numIslands(vector<vector<char>>& grid) {
        
        int cnt=0;
        int m=grid.size();
        int n=grid[0].size();
        
        
        vector<vector<int>>visited(m,vector<int>(n,0));
        
      for(int i=0;i<m;i++)
      {
          for(int j=0;j<n;j++)
          {
              if(!visited[i][j] && grid[i][j]=='1'){
              
                       cnt++;
                         bfs(i,j,visited,grid);
         
              }
          }
      }
        
        return cnt;
        
        
        
        
        
        
    }
};