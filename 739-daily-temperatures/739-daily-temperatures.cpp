class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        vector<int>ans;
        int n=temperatures.size();
        for(int i=n-1;i>=0;i--)
        {
            
            
            if(st.size()==0)
            {
                ans.push_back(i);
            }
            if(st.size()>0 && st.top().first>temperatures[i])
            {
                ans.push_back(st.top().second);
                
            }
            else if(st.size()>0 && st.top().first<=temperatures[i])
            {
                while(st.size()>0 && st.top().first<=temperatures[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    ans.push_back(i);
                    
                }
                else
                {
                    ans.push_back(st.top().second);
                    
                }
            }
            st.push({temperatures[i],i});
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<n;i++)
        {
            ans[i]-=i;
            
        }
        return ans;
        
        
        
    }
};