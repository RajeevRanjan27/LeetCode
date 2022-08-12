class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
//         int n=mat.size();
//         int m=mat[0].size();
//         vector<vector<int>>ans(r,vector<int>(c));
//         vector<int>temp;
//         int count=0;
//       if(r*c!=m*n)
//           return mat;
    
//       for(int i=0;i<n;i++)
//       {
//           for(int j=0;j<m;j++)
//           {
            
//               temp.push_back(mat[i][j]);
//           }
//       }
        
//         for(int i=0;i<r;i++)
//         {
//             for(int j=0;j<c;j++)
//             {
//                 ans[i][j]=temp[count++];
//             }
//         }
//         return ans;
        
        
        int m=mat.size();
        int n=mat[0].size();
        
        if(m*n!=r*c)
        {
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));
        int rptr=0,cptr=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[rptr][cptr++]=mat[i][j];
                if(cptr==c)
                {
                    rptr++;cptr=0;
                }
            }
        }
        return ans;
        
        
    }
};