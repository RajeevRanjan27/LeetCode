class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
    
        priority_queue<pair<long long,pair<int,int>>>pq;
        
        vector<vector<int>>res(K);
        for(int i=0;i<points.size();i++)
        {
            pq.push({(points[i][0]*points[i][0]+points[i][1]*points[i][1]),{points[i][0],points[i][1]}});
            if(pq.size()>K)
            {
                pq.pop();
                
            }
        }
        
       for(int i=0;i<K;i++)
        {
           pair<int,int>top=pq.top().second;
            pq.pop();
            res[i]={top.first,top.second};
            
        }
        
        return res;
        
        
    }
};