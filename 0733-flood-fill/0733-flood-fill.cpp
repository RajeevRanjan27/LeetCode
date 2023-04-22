class Solution {
public:
    
    void dfs(int row, int col, vector<vector<int>>&image, vector<vector<int>>&ans, int ini, int color, int delrow[],int delcol[])
    {
     ans[row][col]=color;
        
        int n=image.size();
        int m=image[0].size();
        
        for(int i=0;i<4;i++)
        {
          int nrow=row+delrow[i];
           int ncol=col+delcol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==ini && ans[nrow][ncol]!=color)
            {
                dfs(nrow,ncol,image,ans,ini,color, delrow, delcol);
                
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        vector<vector<int>>ans=image;
        int ini=image[sr][sc];
        
        int delrow[]={1,0,-1,0};
        int delcol[]={0,1,0,-1};
        
        dfs(sr,sc,image,ans,ini,color,delrow,delcol);
        return ans;
        
        
    }
};