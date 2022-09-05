class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            // if(mp.find(nums[i])!=mp.end())
            if(mp[nums[i]]>0)
                return true;
            else
                mp[nums[i]]++;
            
        }
        return false;
        
    }
};