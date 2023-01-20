class Solution {
public:
    

    int atmostkdistinct(vector<int>&nums, int k)
    {
               
        int i=0,j=0;
        int res=0;
        unordered_map<int,int>mp;
         
        while(j<nums.size())
        {
            mp[nums[j]]++;
            
            if(mp.size()<=k)
            {
                res+=j-i+1;
            }
            
            else
            {
                while(mp.size()>k)
                {
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)mp.erase(nums[i]);
                    i++;
                }
                 
              res+=j-i+1;
            }
            j++;
            
        }
        return res;
        
    }
    
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostkdistinct(nums,k)- atmostkdistinct(nums,k-1);

 
    }
};