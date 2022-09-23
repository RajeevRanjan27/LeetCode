class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        
    stack<int>st;
        int n=heights.size();
        
        vector<int>ans(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
         
           
            if(!st.empty()&& st.top()<heights[i])
            {
                while(!st.empty()&& st.top()<heights[i])
                {
                    st.pop();
                    ans[i]++;
                }
               // ans[i]++;
            }
              if(!st.empty()&& st.top()>heights[i])
            {
                ans[i]+=1;
                
            }
            
           
            st.push(heights[i]);
            
        }
        return ans;
        
        
    }
};