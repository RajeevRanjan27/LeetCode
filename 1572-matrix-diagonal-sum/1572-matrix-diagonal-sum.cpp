class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
int sum =0;
        int n=mat.size();
        for(int i=0;i<mat.size();i++)
        {
            sum+=mat[i][i]+mat[i][n-i-1];
            
        }
        return (n%2)?sum-mat[n/2][n/2]:sum;
        
        
    }
};