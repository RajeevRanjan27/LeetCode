class Solution {
public:
    int halveArray(vector<int>& nums) {
        
        long double sum=0,res=0;
        long double checker=0;
        priority_queue<long double>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
            sum+=nums[i];
            
        }
        
        
        while(pq.size()>0)
        {
            double top=pq.top();
            pq.pop();
            checker+=top/2.0;
            res++;
            pq.push(top/2.0);
            
            if(checker>=sum/2)
                break;
                
            
        }
        return res;
        
        
        
    }
};