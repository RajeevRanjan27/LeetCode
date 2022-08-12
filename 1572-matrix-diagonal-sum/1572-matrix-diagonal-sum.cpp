class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat[0].size();
        int sum=0;
        
        for(int i=0;i<mat.size();i++)
        {
            sum+=mat[i][i]+mat[i][m-1-i];
            
        }
        if(mat.size()%2)
            return sum-mat[m/2][m/2];
        return sum;
        
    }
};