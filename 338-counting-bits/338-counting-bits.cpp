class Solution {
public:
    vector<int> countBits(int n) {
//         vector<int>ans;
                                  
//         for(int i=0;i<=n;i++)  
//         {
//             int j=i,count=0;
//             while(j!=0)
//             {
//                 j&=j-1;
//                 count++;
//             }
//             ans.push_back(count);
//         }
//         return ans;
        
        vector<int>ans(n+1,0);
        // ans[0]=0;
        for(int i=1; i<=n; i++){
            if(i%2==0)
            {
                ans[i]=ans[i/2];
            }
            else 
            {
                ans[i]=ans[i-1]+1;
            }
            
        }
        return ans;
        
    }
};