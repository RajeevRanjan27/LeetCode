class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
//         int m =accounts.size();
//         int n=accounts[0].size();
//         int ans=0;
        
        
//         for(int i=0;i<m;i++)
//         {
//            int sum=0;
//             for(int j=0;j<n;j++)
//             {
//                 sum+=accounts[i][j];
//             }
//             ans=max(sum,ans);
//             sum=0;
            
//         }
//         return ans;
            int ans=0;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=accumulate(accounts[i].begin(),accounts[i].end(),0);
            ans=max(ans,sum);
        }
        return ans;        
        
        
        
    }
};