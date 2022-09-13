class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(r,vector<int>(c));
        vector<int>temp;
        int count=0;
      if(r*c!=m*n)
          return mat;
        int cptr=0,rptr=0;
       for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 ans[rptr][cptr++]=mat[i][j];
                  if(cptr==c)
                  {
                      cptr=0;
                      rptr++;
                  }
             }
         }
return ans;
        
        
//         int m=mat.size();
//         int n=mat[0].size();
        
//         if(m*n!=r*c)
//         {
//             return mat;
//         }
//         vector<vector<int>>ans(r,vector<int>(c));
//         int rptr=0,cptr=0;
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 ans[rptr][cptr++]=mat[i][j];
//                 if(cptr==c)
//                 {
//                     rptr++;cptr=0;
//                 }
//             }
//         }
//         return ans;
        
        
    }
};