class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        
        
       
        long long ans=0,temp=0;
        
        int i=0,j=0;
        unordered_map<int,int>mp;
//         vector<long long>prefix(nums.size());
//         prefix[0]=nums[0];
        
//         for(int i=1;i<nums.size();i++)
//         {
//             prefix[i]=prefix[i-1]+nums[i];
//         }
        
        
        
        while(j<nums.size())
        {
            mp[nums[j]]++;
            temp+=nums[j];
            
            if(j-i+1<k)
            {
                j++;
                
            }
            else if(j-i+1==k&&mp.size()==k)
            {
                    ans=max(ans,temp);
                    
                    temp-=nums[i];
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)mp.erase(nums[i]);
                    i++;
                   
                 j++;
                
            }
            else {
              while(mp.size()<j-i+1)
              {
                  mp[nums[i]]--;
                  temp-=nums[i];
                  if(mp[nums[i]]==0)mp.erase(nums[i]);
                  i++;
              }
                j++;
            }
        }
        return ans;
    }
};