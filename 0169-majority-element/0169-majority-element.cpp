class Solution {
public:
    int majorityElement(vector<int>& nums) {
//       // if(nums.size()==1)return nums[0];
        
//         int ans=0;
        
//         unordered_map<int,int>mp;
//         for(auto x:nums)mp[x]++;
        
//         for(int i=0;i<nums.size();i++){
//             if(mp[nums[i]]>nums.size()/2)
//             {
//                 ans=nums[i];
//             }
            
//         }
//         return ans;
        
        
        int value=nums[0];
        int count=1;
      
        for(int i=1;i<nums.size();i++)
        {
            if(value==nums[i])
            {
                count++;
            }
            else if(count==0)
            {
                 value=nums[i];
                 count++;
            }
            else 
            {
                count--;
            }
                
        }
            return value;
        
    }
};