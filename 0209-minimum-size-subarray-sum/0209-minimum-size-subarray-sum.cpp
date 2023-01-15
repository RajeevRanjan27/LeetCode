class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        
        int ans=INT_MAX,sum=0;
        int i=0,j=0,n=nums.size();
        while(j<n)
        {
            sum+=nums[j];
            if(sum<target)
            {
                j++;
                
            }
            
            else if(sum>=target)
            {
                
                while(sum>=target )
                {
                    ans=min(ans,j-i+1);
                    sum-=nums[i++];
                    
                }
               j++;
                
            }
            
            
        }
        return ans==INT_MAX?0:ans;
        
    }
};