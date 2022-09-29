class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        
        int AND=0,i=0,res=0;
        for(int j=0;j<nums.size();j++)
        {
            while((AND&nums[j]) >0)
            
                AND ^=nums[i++];
                
            
            AND |=nums[j];
            res=max(res,j-i+1);
           
        }
        return res;
        
    }
};