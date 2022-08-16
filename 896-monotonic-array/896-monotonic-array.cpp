class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        
        // if(nums[0]>nums[1])
        // {
        // for(int i=1;i<nums.size()-1;i++)
        // {
        //     if(nums[i]<nums[i+1])
        //     {
        //         return false;
        //     }
        // }
        //     return true;
        // }
        // else
        // {
        //     for(int i=1;i<nums.size()-1;i++)
        //     {
        //         if(nums[i]>nums[i+1])
        //         {
        //             return false;
        //         }
        //     }
        //     return true;
        // }
        
        bool inc=true;
        bool dec=true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]) inc=false;
            if(nums[i]<nums[i+1]) dec=false;
            if(inc== false && dec == false) return false;
            
            }
        return true;
        
    }
};