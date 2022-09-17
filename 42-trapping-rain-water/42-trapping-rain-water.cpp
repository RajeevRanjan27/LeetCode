class Solution {
public:
    
    
    
    void nextgreaterleft(vector<int>&height ,vector<int>&ngl)
    {
        stack<int>st;
        
        int n=height.size();
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
            {
                ngl.push_back(0);
                st.push(height[i]);
                
            }
            else if(st.size()>0 && st.top()>height[i])
            {
                ngl.push_back(st.top());
                
                
            }
            else if(st.size()>0 && st.top()<=height[i])
            {
                
                    while(st.size()>0 && st.top()<=height[i])
                    {  st.pop();}
                    
                if(st.size()==0)
                {
                    ngl.push_back(0);
                    st.push(height[i]);
                    
                }
                else 
                {
                    ngl.push_back(st.top());
                    
                }
                
                
                
            }
           // st.push(height[i]);
        }
    }
    
    void nextgreaterright(vector<int>&height,vector<int>&ngr)
        {
             stack<int>s;
        
        int n=height.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
            {
                ngr.push_back(0);
                  s.push(height[i]);
                
            }
            else if(s.size()>0 && s.top()>height[i])
            {
                ngr.push_back(s.top());
                
            }
            else if(s.size()>0 && s.top()<=height[i])
            {
                
                    while(s.size()>0 && s.top()<=height[i])
                    {  s.pop();}
                    
                if(s.size()==0)
                {
                    ngr.push_back(0);
                      s.push(height[i]);
                    
                }
                else 
                {
                    ngr.push_back(s.top());
                    
                }
                
                
                
            }
          
        }
        reverse(ngr.begin(),ngr.end());
     
    }
        
        
        
        
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>ngl;
        vector<int>ngr;
        nextgreaterleft(height,ngl);
        nextgreaterright(height,ngr);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int temp=min(ngl[i],ngr[i])-height[i];
            ans+=temp>0?temp:0;
            
            
        }
        return ans;
        
    }
};