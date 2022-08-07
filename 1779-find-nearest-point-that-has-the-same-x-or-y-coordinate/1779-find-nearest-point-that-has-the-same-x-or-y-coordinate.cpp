class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int n=points.size();
        int index=-1,ans=INT_MAX,ind=-1,temp=-1;
        for(int i=0;i<n;i++)
        {
            
            
            if(points[i][0]==x || points[i][1]==y)
            { // int a=abs(points[i][0]-x),b=abs(points[i][1]-y);
               // ans=min(ans,a+b);
               // if(ans>=a+b)
                temp=abs(points[i][0]-x)+abs(points[i][1]-y);
                 //ans=temp;
                 // ind=i;
                if(temp<ans)
                  //  ans=a+b;
                  //if(ans!=abs(points[i][0]-x)+abs(points[i][1]-y))
                {  //cout<<ans<<endl;
                     ans=temp;
                     //  cout<<i<<endl;
                        index=i;
                      //  cout<<index<<"\n";
                }
            }
                    
            
        }
        return index;
        
        
    }
};