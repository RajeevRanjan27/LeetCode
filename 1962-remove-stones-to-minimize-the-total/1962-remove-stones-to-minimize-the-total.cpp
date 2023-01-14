class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        int res=0;
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++)
        {
            pq.push(piles[i]);
            res+=piles[i];
            
        }
        for(int i=0;i<k;i++)
        {
            int curr=pq.top();
            
            res-=curr/2 ;
            pq.pop();
            pq.push(curr-curr/2);
            
        }
        
        return res;
        
        
    }
};