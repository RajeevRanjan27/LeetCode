class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int firstxorsec=0,mask=1,first=0;
        for(auto &num:nums)
        {
            firstxorsec ^=num;
            
        }
        while(not(firstxorsec & mask)) 
        {
            mask<<=1;
        }
        for (auto &num: nums)
        {
            if(num&mask)first ^=num;
            
            
        }
        return {first,firstxorsec ^ first};
        
        
    }
};