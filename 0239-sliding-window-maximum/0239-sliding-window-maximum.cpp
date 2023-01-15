class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        list<int>l;
        
        int i=0,j=0,n=nums.size();
        
        while(j<n)
        {
            while(!l.empty()&&l.back()<nums[j])l.pop_back();
            l.push_back(nums[j]);
            
            if(j-i+1<k)
            { 
                j++;
            }
            else if(j-i+1==k)
            {
                res.push_back(l.front());
                if(l.front()==nums[i])l.pop_front();
                i++;
                j++;
            }
            
        }
        
     return res;
    }
};