class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        stack<pair<int,int>>s;
        vector<int>big;
        int ans=0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                s.push({prices[i],i});
                big.push_back(i);
                
            }
            else if(s.size()>0 && s.top().first>prices[i] )
            {
                big.push_back(s.top().second);
                
            }
            else if(s.size()>0 && s.top().first<=prices[i])
            {
                while(s.size()>0 && s.top().first<=prices[i])
                {
                    s.pop();
                    
                }
                if(s.size()>0)
                {
                    big.push_back(s.top().second);
                    
                }
                else{
                    big.push_back(i);
                     s.push({prices[i],i});
                }
            }
            
          
        }
       reverse(big.begin(),big.end());
        
        
//         for(auto x:big)
//         {
//             cout<<prices[x]<<" ";
            
//         }
        
//         cout<<"\n";
        for(int i=0;i<prices.size();i++)
        {
          
            ans=max(ans,prices[big[i]]-prices[i]);
            cout<<ans<<" ";
        }
        return ans;
        
        
        
        
        
    }
};