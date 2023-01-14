class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        
        long long score=0;
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
            
        }
        
        while(k--)
        {
            int top=pq.top();
            pq.pop();
             score+=top;
            top=top%3?(top/3)+1:top/3;
            pq.push(top);
           
            
        }
        return score;
    }
};