class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        
       vector<vector<int>>res;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])continue;
            
            int left=i+1;
            int right=n-1;
            
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum>0)
                {
                    right--;
                }
                else if(sum<0)
                {
                    left++;
                }
                else {
                    res.push_back(vector<int> {nums[i],nums[left],nums[right]});
                while(right>0 && nums[right]==nums[right-1])
                {
                    right--;
                }
                while(left<n-1 && nums[left]==nums[left+1])
                {
                    left++;
                }
                    right--,left++;
            }
            }
            
        }
        return res;
        
        
        
        
        
    }
};