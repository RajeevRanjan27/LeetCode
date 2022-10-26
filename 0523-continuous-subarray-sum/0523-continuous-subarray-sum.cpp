class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        int sum=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            sum=sum%k;
            
            
            if(mp.find(sum)!=mp.end())
            {
                if(i-mp[sum]>1)return true;
                    
            }
            else
            {
                 mp[sum]=i;
               // cout<<"else "<<mp[sum]<<" ";
                
            }
            
             
        }
        return false;
        
        
        
    }
};