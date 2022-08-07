class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int n=nums.size();
        
        // int ans=1;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==0)
        //         return 0;
        //     else
        //         ans*=(nums[i]>0)?1:-1;
        // }
        // return ans;
        
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                return 0;
            if(nums[i]<0)
            {
                count++;
            }
        }
        return (count%2)?-1:1;
        
    }
};