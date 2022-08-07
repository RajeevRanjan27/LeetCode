class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        
        for(int i=n-1;i>1;i--)
        {
            if(nums[i]<(nums[i-1]+nums[i-2]))
          //      int temp=nums[i]+nums[i-1]+nums[i-2];
                
                
               // ans=max(ans,nums[i]+nums[i-1]+nums[i-2]);
       
               // ans=nums[i]+nums[i-1]+nums[i-2];
               ans=max(ans,nums[i]+nums[i-1]+nums[i-2]);
                 //   break;
            }
        return ans;
        
    }
};